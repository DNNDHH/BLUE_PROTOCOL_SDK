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
	 * Function FPSDisplay.FPSDisplay_C.GetText_1
	 */
	struct UFPSDisplay_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.Tick
	 */
	struct UFPSDisplay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.Set Show
	 */
	struct UFPSDisplay_C_SetShow_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.SetEditMode
	 */
	struct UFPSDisplay_C_SetEditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.ChangeFPSShow
	 */
	struct UFPSDisplay_C_ChangeFPSShow_Params
	{	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.Construct
	 */
	struct UFPSDisplay_C_Construct_Params
	{	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.Destruct
	 */
	struct UFPSDisplay_C_Destruct_Params
	{	};

	/**
	 * Function FPSDisplay.FPSDisplay_C.ExecuteUbergraph_FPSDisplay
	 */
	struct UFPSDisplay_C_ExecuteUbergraph_FPSDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
