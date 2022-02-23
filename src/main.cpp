#include <iostream>
#include <string>
//#include <boost/program_options.hpp>
using namespace std;

//namespace po = boost::program_options;

class weakness_info {
private:
	double against_normal; //(Denotes the multiplier applied when damage is taken from an attack of a ___ type pokemon)
	double against_fire;
	double against_water;
	double against_electric;
	double against_grass;
	double against_ice;
	double against_fight;
	double against_poison;
	double against_ground;
	double against_flying;
	double against_psychic;
	double against_bug;
	double against_rock;
	double against_ghost;
	double against_dragon;
	double against_dark;
	double against_steel;
	double against_fairy;
public:
	weakness_info() {
		against_normal = 0.0;
		against_fire = 0.0;
		against_water = 0.0;
		against_electric = 0.0;
		against_grass = 0.0;
		against_ice = 0.0;
		against_fight = 0.0;
		against_poison = 0.0;
		against_ground = 0.0;
		against_flying = 0.0;
		against_psychic = 0.0;
		against_bug = 0.0;
		against_rock = 0.0;
		against_ghost = 0.0;
		against_dragon = 0.0;
		against_dark = 0.0;
		against_steel = 0.0;
		against_fairy = 0.0;
	}
	~weakness_info();
}; 

int main(int argc, char** argv)
{
	std::cout << "George is working on this!" << std::endl;

	try {

		/*po::options_description desc("Allowed options");
		desc.add_options()
			("help", "produce help message")
			//add more here
			;

		po::variables_map vm;
		po::store(po::parse_command_line(argc, argv, desc), vm);
		po::notify(vm);
		
		if (vm.count("help")) {
			std::cout << desc << "\n";
			return 0;
		}
		*/
	}
	catch (std::exception& e) {
		std::cerr << "error: " << e.what() << "\n";
		return 1;
	}
	catch (...) {
		std::cerr << "Exception of unknown type!\n";
	}


	return 0;
}