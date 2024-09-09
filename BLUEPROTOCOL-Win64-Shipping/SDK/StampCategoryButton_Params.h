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
	 * Function StampCategoryButton.StampCategoryButton_C.SetAlpha
	 */
	struct UStampCategoryButton_C_SetAlpha_Params
	{
	public:
		bool                                                       BMax;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.SetIndex
	 */
	struct UStampCategoryButton_C_SetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.SetLimitedItemNumber
	 */
	struct UStampCategoryButton_C_SetLimitedItemNumber_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.SetEnabled
	 */
	struct UStampCategoryButton_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.Update
	 */
	struct UStampCategoryButton_C_Update_Params
	{
	public:
		struct FSBStampCategoryMasterData                          InStampCategoryMasterData;                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InIndex;                                                 // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083
	 */
	struct UStampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.PreConstruct
	 */
	struct UStampCategoryButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.Construct
	 */
	struct UStampCategoryButton_C_Construct_Params
	{	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.UpdateTexture
	 */
	struct UStampCategoryButton_C_UpdateTexture_Params
	{	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStampCategoryButton_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UStampCategoryButton_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UStampCategoryButton_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.ExecuteUbergraph_StampCategoryButton
	 */
	struct UStampCategoryButton_C_ExecuteUbergraph_StampCategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StampCategoryButton.StampCategoryButton_C.OnClicked__DelegateSignature
	 */
	struct UStampCategoryButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
