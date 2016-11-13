function b = back(r,c,k)
global Gray_Img
Gray_Img(r,c)=k;
if Gray_Img(r+1,c)==1
    back(r+1,c,k);
end
if Gray_Img(r-1,c)==1
    back(r-1,c,k);
end
if Gray_Img(r,c+1)==1
    back(r,c+1,k);
end
if Gray_Img(r,c-1)==1
    back(r,c-1,k);
end

b=1;
