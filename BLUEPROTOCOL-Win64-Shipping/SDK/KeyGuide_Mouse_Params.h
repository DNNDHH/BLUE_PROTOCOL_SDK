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
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.InitializeVisibility
	 */
	struct UKeyGuide_Mouse_C_InitializeVisibility_Params
	{	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.SetTextVisible
	 */
	struct UKeyGuide_Mouse_C_SetTextVisible_Params
	{
	public:
		ESkillActionPosition                                       SkillActionPosition;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.KeyConfigActionToKey
	 */
	struct UKeyGuide_Mouse_C_KeyConfigActionToKey_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CYM9[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x01D8(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakePare
	 */
	struct UKeyGuide_Mouse_C_MakePare_Params
	{
	public:
		TArray<class USBRuntimeTextBlock*>                         Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<ESBKeyConfigAction>                                 Value;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>       ReturnValue;                                             // 0x0020(0x0050)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.GetKeyToTextString
	 */
	struct UKeyGuide_Mouse_C_GetKeyToTextString_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBKeyConfigAction                                         KeyConfigAction;                                         // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDash;                                                  // 0x01D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BF75[0x6];                                   // 0x01D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x01D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeJumpAttackText
	 */
	struct UKeyGuide_Mouse_C_MakeJumpAttackText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              ReturnValue;                                             // 0x01D0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeDodgeAttackText
	 */
	struct UKeyGuide_Mouse_C_MakeDodgeAttackText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              ReturnValue;                                             // 0x01D0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeMovesText
	 */
	struct UKeyGuide_Mouse_C_MakeMovesText_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x01D0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.ApplyKeyConfigData
	 */
	struct UKeyGuide_Mouse_C_ApplyKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyGuide_Mouse.KeyGuide_Mouse_C.ExecuteUbergraph_KeyGuide_Mouse
	 */
	struct UKeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
