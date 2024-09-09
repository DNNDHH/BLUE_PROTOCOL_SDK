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
	 * UserDefinedStruct KeyConfigType.KeyConfigType
	 * Size -> 0x0021
	 */
	struct FKeyConfigType
	{
	public:
		EConfig_KeyConfigItemType                                  ItemType_7_DD2CE5EA4CA84F2F4127619B80A4F8B0;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EConfig_KeyconfigItems                                     InputType_6_1671F6DF49D57653C71C59B842112D42;            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PIOH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      YOffset_13_A71A1FFF421A54D2109E7CAF7EEB1E6F;             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextId_12_D6CB286B4BF811A086EEB483DCAAC369;              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisablePad_15_80F2CDCE487899DDE12AC08649A3CA64;          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableKeyMouse_17_BF42852B4CCABB494DDFF8870AE5A15C;     // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VSK[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRadioButtonData>                            RadioButtonDatas_21_E2F05150482EAE873D78B49F1FD09286;    // 0x0010(0x0010) Edit, BlueprintVisible
		bool                                                       ShowNewFlag_23_6A108DC0490CD9A3C729F3817E0441D4;         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
