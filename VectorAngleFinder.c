float dot(float x1,float y1,float z1,float x2,float y2,float z2){
return x1*x2+y1*y2+z1*z2;
}
float vectorlenghtA(float x1,float y1,float z1,float x2,float y2,float z2){
x1-=x2;y1-=y2;z1-=z2;
return (x1*x1)+(y1*y1)+(z1*z1);
}
//Find angle between two position vectors
float vectorangleB(float x1,float y1,float z1,float x2,float y2,float z2){
float l1,l2,co;
l1=vectorlenghtA(x1,y1,z1,0,0,0);
l2=vectorlenghtA(x2,y2,z2,0,0,0);
co=dot(x1,y1,z1,x2,y2,z2)/sqrtf(l1*l2);
return acosf(co);
}
