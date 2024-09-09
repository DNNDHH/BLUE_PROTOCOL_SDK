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
	 * UserDefinedStruct KeyAssignSet.KeyAssignSet
	 * Size -> 0x01E8
	 */
	struct FKeyAssignSet
	{
	public:
		EConfig_KeyconfigItems                                     KeyConfigItemType_6_28223E3E49BB973FC7A55E8401D99C1F;    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBKeyConfigAction                                         KeyboardType_12_43AE8C874412DD36A46ECC92F0974BBB;        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBKeyConfigAction                                         PadType_13_CF3D054A4674F5B48C426291AD67CE44;             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENeedInputType                                             NeedType_9_F6CC1EAD49C34C504109C0B4036F97EC;             // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U1H5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InvalidKeyboardTypes_20_9A17E06F4A725C82E28439860A5B7F7B[0x50]; // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              InvalidPadTypes_25_6E266C6141C40F88D14AAE83A68099C9[0x50]; // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              InvalidMouseTypes_24_7481863D47B82070DC4E61919B9818EA[0x50]; // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<ESBKeyConfigKeyboardKey, int32_t>                     WarningKeyboardTypes_35_2045C42F46813470F6EBE4A972586701; // 0x00F8(0x0050) Edit, BlueprintVisible
		TMap<ESBKeyConfigMouseKey, int32_t>                        WarningMouseType_44_A90DAD1447140F3DF585019B8B6C0A1B;    // 0x0148(0x0050) Edit, BlueprintVisible
		TMap<ESBKeyConfigGamepadKey, int32_t>                      WarningPadTypes_46_BDC01C9B465836086CE48582947B7F26;     // 0x0198(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
