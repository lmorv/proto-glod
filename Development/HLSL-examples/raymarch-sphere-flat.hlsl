float3 rayOrigin = 1-(viewDir - worldPos); //1-() inverts reversed world orientation.
float3 rayStep = viewDir * -1; // '-1' for correct orientation

// float3 lightDirection = normalize(lightPos); // for shading


for(int i = 0; i < 256; i++) // step thrugh positions according to a nimber of 'samples' (256, cant be too low of a num or else it bugs out). 

{
       // Surface wobble deform code:
       float displace = sphereCenter + (sin(rayOrigin.x * sin(time)/3) + 
                                     sin(rayOrigin.y * sin(time)/3) +
                                     sin(rayOrigin.z * sin(time)/3));

    float dist = length(rayOrigin - sphereCenter) - sphereRadius; // draw a 3d sphere

    if(dist < 0.01) // checks for positions inside of sphere
    {
        
        return ( float3(1,0,0));// returns the color red for every pos (fragment, pixel) within the sphere.

    }

    opacityMask = 1;
    rayOrigin += rayStep;
}

opacityMask = 0; // can be used to hide pixels not within the drawn shape
return float3(0,0,0); 

