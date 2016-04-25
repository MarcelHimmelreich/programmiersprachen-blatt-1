# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
# include <string>

int gcd(int a, int b)
{
	if (b == 0)
	{
	return a
	}
	else if(a==0)
	{
		return b;
	}
	else
	{
		return gcd(b, a%b);
	}
}

double mileToKilometer(double mile)
{
	double kilometer;
	kilometer = mile*1.60934;
	return kilometer;
}

float ZylinderOberfl(float r, float h)
{
    float oberfl = (2*M_PI*r^2)+(2*M_PI*r*h);
    return oberfl;
}

float ZylinderVol(float r, float h)
{
    float vol = M_PI*(r^2)*h
    return vol;
}


float frac(float x)
{
    int y = (int)x;
    int z = y-x;
    return z;
}

int checksum(int Zahl)
{
    int sum = 0;
	while(Zahl>0)
	{
        sum += Zahl%10;
        Zahl /= 10;
	}
    return sum;
}

int sumMultiples()
{
    int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}

	}
    return sum;
}



TEST_CASE("describe_gcd ", "[gcd]")
{
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(6, 9) == 3);
	REQUIRE(gcd(3, 7) == 1);
}

TEST_CASE("describe_sumMultiples ", "[sumMultiples]")
{
	REQUIRE(sumMultiples() ==234168);
}

TEST_CASE("describe_checksum ", "[checksum]")
{
	REQUIRE(chekcsum(15) == 6);
	REQUIRE(checksum(25) == 7);
	REQUIRE(checksum(35) == 8);
}

TEST_CASE("describe_ZylinderVol","[ZylinderVol]")
{
	REQUIRE(ZylinderVol(1,2) == Approx(6.283));
}

TEST_CASE("describe_ZylinderOberfl","[ZylinderOberfl]")
{
	REQUIRE(ZylinderOberfl(1,2) == Approx(18.85));
}

TEST_CASE("describe_mileToKilometer","[mileToKilometer]")
{
	REQUIRE(mileToKilometer(1) == Approx(1.60934));
	REQUIRE(mileToKilometer(2) == Approx(3,21869));
	REQUIRE(mileToKilometer(5) == Approx(8,04672));
}

TEST_CASE("describe_frac","[frac]")
{
	REQUIRE(frac(1.11) == Approx(0.11));
	REQUIRE(frac(45.1234) == Approx(0.1234));
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}


