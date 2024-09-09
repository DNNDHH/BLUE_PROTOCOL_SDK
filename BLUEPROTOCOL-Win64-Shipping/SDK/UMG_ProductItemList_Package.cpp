/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateItemBoxIcon
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::UpdateItemBoxIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateItemBoxIcon");
		
		UUMG_ProductItemList_C_UpdateItemBoxIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.CreateItemList_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBP_SBProductItemData_C*>             ItemDataList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_ProductItemList_C::CreateItemList_Internal(TArray<class UBP_SBProductItemData_C*> ItemDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.CreateItemList_Internal");
		
		UUMG_ProductItemList_C_CreateItemList_Internal_Params params {};
		params.ItemDataList = ItemDataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::SetData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.SetData");
		
		UUMG_ProductItemList_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.SetProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductData_C*                         Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::SetProductData(class UBP_SBProductData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.SetProductData");
		
		UUMG_ProductItemList_C_SetProductData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.SetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              InDetailType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::SetDetailType(E_SBProductDetailType InDetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.SetDetailType");
		
		UUMG_ProductItemList_C_SetDetailType_Params params {};
		params.InDetailType = InDetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9");
		
		UUMG_ProductItemList_C_OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding_Tab
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::BannerIconPadding_Tab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding_Tab");
		
		UUMG_ProductItemList_C_BannerIconPadding_Tab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding_Tab
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::ResetBannerIconPadding_Tab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding_Tab");
		
		UUMG_ProductItemList_C_ResetBannerIconPadding_Tab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList_Tab
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::ResetItemList_Tab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList_Tab");
		
		UUMG_ProductItemList_C_ResetItemList_Tab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::BannerIconPadding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.BannerIconPadding");
		
		UUMG_ProductItemList_C_BannerIconPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::ResetBannerIconPadding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.ResetBannerIconPadding");
		
		UUMG_ProductItemList_C_ResetBannerIconPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::ResetItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.ResetItemList");
		
		UUMG_ProductItemList_C_ResetItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoad_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::OnLoad_Icon(const class FName& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnLoad_Icon");
		
		UUMG_ProductItemList_C_OnLoad_Icon_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.Construct");
		
		UUMG_ProductItemList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItemList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.PreConstruct");
		
		UUMG_ProductItemList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateLayout
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::UpdateLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.UpdateLayout");
		
		UUMG_ProductItemList_C_UpdateLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::OnItemClicked_Event(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked_Event");
		
		UUMG_ProductItemList_C_OnItemClicked_Event_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.SetSelectedItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItemList_C::SetSelectedItemData(class UBP_SBProductItemData_C* Data, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.SetSelectedItemData");
		
		UUMG_ProductItemList_C_SetSelectedItemData_Params params {};
		params.Data = Data;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItemList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.Destruct");
		
		UUMG_ProductItemList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.LayoutCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              DetailType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsItemBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItemList_C::LayoutCheck(E_SBProductDetailType DetailType, bool bIsItemBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.LayoutCheck");
		
		UUMG_ProductItemList_C_LayoutCheck_Params params {};
		params.DetailType = DetailType;
		params.bIsItemBox = bIsItemBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.ExecuteUbergraph_UMG_ProductItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::ExecuteUbergraph_UMG_ProductItemList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.ExecuteUbergraph_UMG_ProductItemList");
		
		UUMG_ProductItemList_C_ExecuteUbergraph_UMG_ProductItemList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnBannerVisibilityChanged __DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItemList_C::OnBannerVisibilityChanged__DelegateSignature(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnBannerVisibilityChanged __DelegateSignature");
		
		UUMG_ProductItemList_C_OnBannerVisibilityChanged__DelegateSignature_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnSelectedItemData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItemList_C::OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnSelectedItemData__DelegateSignature");
		
		UUMG_ProductItemList_C_OnSelectedItemData__DelegateSignature_Params params {};
		params.Data = Data;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItemList_C::OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItemList.UMG_ProductItemList_C.OnItemClicked__DelegateSignature");
		
		UUMG_ProductItemList_C_OnItemClicked__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_ProductItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_ProductItemList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ProductItemList.UMG_ProductItemList_C");
		return ptr;
	}

}


