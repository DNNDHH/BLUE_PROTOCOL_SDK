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
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Setup
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_Setup_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6CB1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Requirement;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Limit;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStepUp;                                                // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.OnClose_Event
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_OnClose_Event_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Destruct
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_Destruct_Params
	{	};

	/**
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Construct
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_Construct_Params
	{	};

	/**
	 * Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem
	 */
	struct UProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
