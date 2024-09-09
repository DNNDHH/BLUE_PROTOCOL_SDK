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
	 * Function Fishing_Wait.Fishing_Wait_C.CheckFirstOpen
	 */
	struct UFishing_Wait_C_CheckFirstOpen_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1DYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.Init
	 */
	struct UFishing_Wait_C_Init_Params
	{	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.CheckBackPack
	 */
	struct UFishing_Wait_C_CheckBackPack_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C95Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.Construct
	 */
	struct UFishing_Wait_C_Construct_Params
	{	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.DialogAction
	 */
	struct UFishing_Wait_C_DialogAction_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.Warning_BackPackIsFull
	 */
	struct UFishing_Wait_C_Warning_BackPackIsFull_Params
	{	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UFishing_Wait_C_BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.ExecuteUbergraph_Fishing_Wait
	 */
	struct UFishing_Wait_C_ExecuteUbergraph_Fishing_Wait_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5WIM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fishing_Wait.Fishing_Wait_C.ExitFinshing__DelegateSignature
	 */
	struct UFishing_Wait_C_ExitFinshing__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
