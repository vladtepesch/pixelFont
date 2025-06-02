use strict;
use warnings;
use Data::Dumper;

my $headerName = shift;


#if( $headerName =~ /(?<w>\d+)x(?<h>\d+)(?<suf>.*?)_(?<hv>horizontal|vertikal)_.*/){ 
#  print Dumper(%+).$/;
#}

if( $headerName =~ /(?<w>\d+)x(?<h>\d+)(?<suf>.*?)_(?<hv>horizontal|vertikal)_.*/){ 
#  print Dumper(\%+).$/;
  my $w   = $+{'w'}; 
  my $h   = $+{'h'}; 
  my $suf = $+{'suf'};
  my $hv  = $+{'hv'};

  my $fontId = "${w}x${h}${suf}";
  my $defineName = "FONT_ACTIVATE_" . $fontId;


  my $isVert = ($hv eq 'vertikal');
  my $isVertStr = $isVert?'true':'false';

  my $bpr   = int((($isVert?$h:$w) + 7)/8);
  my $bytes = ($isVert?$w:$h) * $bpr;

  my $store = <<DATA;
  #define $defineName  1

  #if $defineName == 1
  const FontDef* font${fontId}_getFontDef(void);
  #endif



  // ####################################################
  #if $defineName == 1
  const FontDef* font${fontId}_getFontDef(void)
  {
    static
    #include "${fontId}_${hv}_LSB_1.h"

    static const FontDef fd = {
      .isVert = $isVertStr,
      .bytesPerChar      = $bytes,
      .bytesPerRowOrLine = $bpr,
      .h = $h,
      .w = $w,
      .data = (const uint8_t*)&font[0][0],
    };
    return &fd;
    
  }
  #endif

DATA


  print $store;


}else{
  print STDERR "cannot interpret '$headerName'\n";
}


