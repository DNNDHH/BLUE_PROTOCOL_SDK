﻿#pragma once

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
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.MakeOrientToCameraText
	 */
	struct UKeyGuide_Mouse2_Mount_C_MakeOrientToCameraText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x01D0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.KeyConfigActionToKey
	 */
	struct UKeyGuide_Mouse2_Mount_C_KeyConfigActionToKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ALIH[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x01D8(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.MakePare
	 */
	struct UKeyGuide_Mouse2_Mount_C_MakePare_Params
	{
	public:
		TArray<class USBRuntimeTextBlock*>                         Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<ESBKeyConfigAction>                                 Value;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>       ReturnValue;                                             // 0x0020(0x0050)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.GetKeyToTextString
	 */
	struct UKeyGuide_Mouse2_Mount_C_GetKeyToTextString_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWalk;                                                  // 0x01D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_24SW[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x01D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.MakeMovesText
	 */
	struct UKeyGuide_Mouse2_Mount_C_MakeMovesText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x01D0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.ApplyKeyConfigData
	 */
	struct UKeyGuide_Mouse2_Mount_C_ApplyKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyGuide_Mouse2_Mount.KeyGuide_Mouse2_Mount_C.ExecuteUbergraph_KeyGuide_Mouse2_Mount
	 */
	struct UKeyGuide_Mouse2_Mount_C_ExecuteUbergraph_KeyGuide_Mouse2_Mount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AY3W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif