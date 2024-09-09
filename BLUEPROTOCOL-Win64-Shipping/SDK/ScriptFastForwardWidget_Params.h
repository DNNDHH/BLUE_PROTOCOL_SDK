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
	 * Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.IsInfoEnable
	 */
	struct UScriptFastForwardWidget_C_IsInfoEnable_Params
	{
	public:
		bool                                                       RetFlag;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.SetFastForwardStatus
	 */
	struct UScriptFastForwardWidget_C_SetFastForwardStatus_Params
	{	};

	/**
	 * Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Construct
	 */
	struct UScriptFastForwardWidget_C_Construct_Params
	{	};

	/**
	 * Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Tick
	 */
	struct UScriptFastForwardWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.ExecuteUbergraph_ScriptFastForwardWidget
	 */
	struct UScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
