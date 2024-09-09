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
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateVisibility
	 */
	struct ULoadingStatusDebug_C_UpdateVisibility_Params
	{	};

	/**
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateStatus
	 */
	struct ULoadingStatusDebug_C_UpdateStatus_Params
	{	};

	/**
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.Construct
	 */
	struct ULoadingStatusDebug_C_Construct_Params
	{	};

	/**
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.Tick
	 */
	struct ULoadingStatusDebug_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct ULoadingStatusDebug_C_BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function LoadingStatusDebug.LoadingStatusDebug_C.ExecuteUbergraph_LoadingStatusDebug
	 */
	struct ULoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
