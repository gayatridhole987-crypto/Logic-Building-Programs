function SumFactors(ino)
{
    let icnt = 0;
    let isum = 0;

    for(icnt = 1; icnt <= (ino / 2); icnt++)
    {
        if(ino % icnt ==0)
        {
            isum = isum + icnt
        }
    }

    return isum;

}

function main()
{
    let iRet = 0 

    iRet = SumFactors(12)

    console.log("Summation of factors : ",iRet)

}

main()

