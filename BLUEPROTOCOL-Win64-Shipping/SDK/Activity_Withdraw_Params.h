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
	 * Function Activity_Withdraw.Activity_Withdraw_C.SetActivity_Internal
	 */
	struct UActivity_Withdraw_C_SetActivity_Internal_Params
	{
	public:
		struct FGuildActivity                                      Other;                                                   // 0x0000(0x00E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Activity_Withdraw.Activity_Withdraw_C.BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
	 */
	struct UActivity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Keys;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      Values;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Activity_Withdraw.Activity_Withdraw_C.ExecuteUbergraph_Activity_Withdraw
	 */
	struct UActivity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
