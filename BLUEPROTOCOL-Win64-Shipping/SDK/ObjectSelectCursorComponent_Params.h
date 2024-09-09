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
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.InitializeAtFirstLoadingComplete
	 */
	struct UObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete_Params
	{	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.IsLocallyControlled
	 */
	struct UObjectSelectCursorComponent_C_IsLocallyControlled_Params
	{
	public:
		bool                                                       bIsLocallyControlled;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2W2Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.UpdateDisplayLocation
	 */
	struct UObjectSelectCursorComponent_C_UpdateDisplayLocation_Params
	{	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.GetDisplayLocation
	 */
	struct UObjectSelectCursorComponent_C_GetDisplayLocation_Params
	{
	public:
		struct FSBInteractionInfo                                  InteractionInfo;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		struct FVector                                             DisplayLocation;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveBeginPlay
	 */
	struct UObjectSelectCursorComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveTick
	 */
	struct UObjectSelectCursorComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ExecuteUbergraph_ObjectSelectCursorComponent
	 */
	struct UObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
