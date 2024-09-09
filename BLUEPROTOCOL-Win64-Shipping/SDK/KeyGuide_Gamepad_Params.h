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
	 * Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.InitializeVisibility
	 */
	struct UKeyGuide_Gamepad_C_InitializeVisibility_Params
	{	};

	/**
	 * Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.SetTextVisible
	 */
	struct UKeyGuide_Gamepad_C_SetTextVisible_Params
	{
	public:
		ESkillActionPosition                                       SkillActionPosition;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.MakePare
	 */
	struct UKeyGuide_Gamepad_C_MakePare_Params
	{
	public:
		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>       Pair1;                                                   // 0x0000(0x0050)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ApplyKeyConfigData
	 */
	struct UKeyGuide_Gamepad_C_ApplyKeyConfigData_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         KeyConfigData;                                           // 0x0000(0x01D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ExecuteUbergraph_KeyGuide_Gamepad
	 */
	struct UKeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
