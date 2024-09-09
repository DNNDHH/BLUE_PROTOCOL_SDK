#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_WeaponForCapture_Info.ST_WeaponForCapture_Info
	 * Size -> 0x0058
	 */
	struct FST_WeaponForCapture_Info
	{
	public:
		ESBWeaponType                                              WeaponType_48_A022EED54B9D783A48C5388EAF2FD1DD;          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HNJ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D;           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MainWeaponNum_8_8EC6E9D944637F4B64650DB0D596EEC4;        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LYY9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     MainWeaponLocationOffsets_40_4B3DA95C49ED6E36BA654993DDD0F10B; // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<struct FRotator>                                    MainWeaponRotations_27_E82641394E4333B112624EBCF67287FF; // 0x0020(0x0010) Edit, BlueprintVisible
		struct FVector                                             SubWeaponLocationOffset_41_8E2422274DD5591893B6939B3F431E66; // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SubWeaponRotation_28_62B2D8F04BDA0247EA317BA97258254A;   // 0x003C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CaptureCameraMoveUpOffset_42_08805AE44C667E6FCB6D708214812281; // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraMoveDownOffset_45_5D3D7608464E5D0443E2F7A43A3BFAA5; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraZoomInOffset_38_9DA83ACD497081901645E080B783F206; // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraZoomOutOffset_39_DA2D5FAF4443EF7E9EE37388B942521A; // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
