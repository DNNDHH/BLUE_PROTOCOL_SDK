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
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateItemBoxIcon
	 */
	struct UUMG_ProductItemList_C_UpdateItemBoxIcon_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.CreateItemList_Internal
	 */
	struct UUMG_ProductItemList_C_CreateItemList_Internal_Params
	{
	public:
		TArray<class UBP_SBProductItemData_C*>                     ItemDataList;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.SetData
	 */
	struct UUMG_ProductItemList_C_SetData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.SetProductData
	 */
	struct UUMG_ProductItemList_C_SetProductData_Params
	{
	public:
		class UBP_SBProductData_C*                                 Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.SetDetailType
	 */
	struct UUMG_ProductItemList_C_SetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      InDetailType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9
	 */
	struct UUMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding_Tab
	 */
	struct UUMG_ProductItemList_C_BannerIconPadding_Tab_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding_Tab
	 */
	struct UUMG_ProductItemList_C_ResetBannerIconPadding_Tab_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList_Tab
	 */
	struct UUMG_ProductItemList_C_ResetItemList_Tab_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding
	 */
	struct UUMG_ProductItemList_C_BannerIconPadding_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding
	 */
	struct UUMG_ProductItemList_C_ResetBannerIconPadding_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList
	 */
	struct UUMG_ProductItemList_C_ResetItemList_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoad_Icon
	 */
	struct UUMG_ProductItemList_C_OnLoad_Icon_Params
	{
	public:
		class FName                                                URL;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.Construct
	 */
	struct UUMG_ProductItemList_C_Construct_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.PreConstruct
	 */
	struct UUMG_ProductItemList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateLayout
	 */
	struct UUMG_ProductItemList_C_UpdateLayout_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked_Event
	 */
	struct UUMG_ProductItemList_C_OnItemClicked_Event_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.SetSelectedItemData
	 */
	struct UUMG_ProductItemList_C_SetSelectedItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.Destruct
	 */
	struct UUMG_ProductItemList_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.LayoutCheck
	 */
	struct UUMG_ProductItemList_C_LayoutCheck_Params
	{
	public:
		E_SBProductDetailType                                      DetailType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsItemBox;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.ExecuteUbergraph_UMG_ProductItemList
	 */
	struct UUMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnBannerVisibilityChanged __DelegateSignature
	 */
	struct UUMG_ProductItemList_C_OnBannerVisibilityChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnSelectedItemData__DelegateSignature
	 */
	struct UUMG_ProductItemList_C_OnSelectedItemData__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked__DelegateSignature
	 */
	struct UUMG_ProductItemList_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
