function DisplayFactors(ino)
{
    let icnt = 0;

    console.log("Factors of : ",ino)

    for(icnt = 1; icnt <= ino / 2; icnt++)
    {
        if(ino % icnt==0)
        {
            console.log(icnt)
        }
    }

}

function main()
{

    DisplayFactors(12)

}

main()

