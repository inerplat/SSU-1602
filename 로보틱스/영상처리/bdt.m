close all; clear all; clc;
%% Image Load
Load_Img=imread('Å×½ºÆ®.jpg');
%color=size(Load_Img,3);

%% Image Processing

%Gray_Img=rgb2gray(Load_Img);
Gray_Img=rgb2gray(Load_Img);
[r,w]=size(Gray_Img);
  level = graythresh(Gray_Img);
  BW = im2bw(Gray_Img,level);
  BW2=uint8(size(Gray_Img));
  for i=1:r
      for j=1:w
          BW2(i,j)=0;
          
          if(BW(i,j)==1) 
              BW2(i,j)=255;
          end
          
      end
  end
  
              
  bw_hist=histeq(BW2,255);
  
  figure(1)
  imshow(BW2);
  figure(2)
  imhist(BW2);