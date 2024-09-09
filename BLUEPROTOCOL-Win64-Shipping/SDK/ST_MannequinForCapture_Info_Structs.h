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
	 * UserDefinedStruct ST_MannequinForCapture_Info.ST_MannequinForCapture_Info
	 * Size -> 0x0030
	 */
	struct FST_MannequinForCapture_Info
	{
	public:
		EProtectorCategory                                         CostumeType_31_A022EED54B9D783A48C5388EAF2FD1DD;         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K19U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D;           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ModelRotation_46_E82641394E4333B112624EBCF67287FF;       // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ModelLocationOffset_67_4B3DA95C49ED6E36BA654993DDD0F10B; // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraMoveUpOffset_64_C7F3AF6D409B67E81ADC69BA80264E45; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraMoveDownOffset_65_6BCBCA6E478CA3272F10718B39A5B6FF; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraZoomInOffset_59_1653D0FB44F4F8E5CE997CA831CA1C77; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCameraZoomOutOffset_60_31CD4F4449D87DCA75B4008DBC503C00; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
