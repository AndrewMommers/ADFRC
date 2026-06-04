        attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",3.162,1,500};
		soundGeneralCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",3.162,1,500};
		soundGeneralCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",3.162,1,500};
		soundCrashes[] =
		{
			"soundGeneralCollision1", 1/3,
			"soundGeneralCollision2", 1/3,
			"soundGeneralCollision3", 1/3
		};
		soundLandCrashes[] =
		{
			"emptySound", 0
		};
		soundBuildingCrash[] =
		{
			"soundGeneralCollision1", 1/3,
			"soundGeneralCollision2", 1/3,
			"soundGeneralCollision3", 1/3
		};
		soundArmorCrash[] =
		{
			"soundGeneralCollision1", 1/3,
			"soundGeneralCollision2", 1/3,
			"soundGeneralCollision3", 1/3
		};
		soundWoodCrash[] =
		{
			"soundGeneralCollision1", 1/3,
			"soundGeneralCollision2", 1/3,
			"soundGeneralCollision3", 1/3
		};
		soundBushCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",3.162,1,500};
		soundBushCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",3.162,1,500};
		soundBushCollision3[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",3.162,1,500};
		soundBushCrash[] =
		{
			"soundBushCollision1", 1/3,
			"soundBushCollision2", 1/3,
			"soundBushCollision3", 1/3
		};
		soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,300};
		soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,300};
		soundWaterCrashes[] =
		{
			"soundWaterCollision1", 1/2,
			"soundWaterCollision2", 1/2
		};
		soundDammage[] = {"\A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10,1};
		soundGetIn[] = {"\Sounds\close.wss",1,1};
		soundGetOut[] = {"\Sounds\open.wss",1,1,50};
		soundEngineOnInt[] = {"\Sounds\Heli_Attack_03_int_start.wss",0.447,1};
		soundEngineOnExt[] = {"\Sounds\Heli_Attack_03_ext_start.wss",1.778,1,600};
		soundEngineOffInt[] = {"\Sounds\Heli_Attack_03_int_stop.wss",0.447,1};
		soundEngineOffExt[] = {"\Sounds\Heli_Attack_03_ext_stop.wss",1.778,1,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",0.316,1};
		rotorDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1,1};
		rotorDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.512,1,300};
		rotorDamage[] =
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] =
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",3.162,1,100};
		landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",3.162,1,100};
		landingSoundInt[] =
		{
			"landingSoundInt0", 1/2,
			"landingSoundInt1", 1/2
		};
		landingSoundOut0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",5.623,1,500};
		landingSoundOut1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",5.623,1,500};
		landingSoundOut[] =
		{
			"landingSoundOut0", 1/2,
			"landingSoundOut1", 1/2
		};
		slingCargoAttach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1,1};
		slingCargoAttach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.778,1,200};
		slingCargoAttach[] =
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoDetach1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.778,1,200};
		slingCargoDetach[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,300};
		slingCargoDetachAir[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"\A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,200};
		slingCargoRopeBreak[] =
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"\Sounds\Heli_Attack_03_ext_engine.wss",2.239,1,600};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"\Sounds\Heli_Attack_03_ext_rotor.wss",1.259,1,1100};
				frequency = "1.4*(rotorSpeed * (1 - rotorThrust/5))";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				speed = 2;
			};
			class RotorSwist
			{
				sound[] = {"\Sounds\swist.wss",1,1,300};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[] = {"\Sounds\Heli_Attack_03_int_engine.wss",0.562,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"\Sounds\Heli_Attack_03_int_rotor.wss",1.122,1};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.224,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.316,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.224,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"\A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"\A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.259,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.259,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",0.398,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.398,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"\Sounds\Heli_Attack_03_ext_engine.wss",2.239,1,600};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"\Sounds\Heli_Attack_03_ext_rotor.wss",1.259,1,1100};
					frequency = "1.4*(rotorSpeed * (1 - rotorThrust/5))";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					speed = 2;
				};
				class RotorSwist
				{
					sound[] = {"\Sounds\swist.wss",1,1,300};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[] = {"\Sounds\Heli_Attack_03_int_engine.wss",0.562,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"\Sounds\Heli_Attack_03_int_rotor.wss",1.122,1};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.224,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.316,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.224,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"\A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"\A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",0.398,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.355,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
