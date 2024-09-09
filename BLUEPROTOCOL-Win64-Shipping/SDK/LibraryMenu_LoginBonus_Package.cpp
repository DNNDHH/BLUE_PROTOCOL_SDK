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
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetItemDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLoginBonusWindowDayData                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_LoginBonus_C::SetItemDetail(const struct FSBLoginBonusWindowDayData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetItemDetail");
		
		ULibraryMenu_LoginBonus_C_SetItemDetail_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::DetailVisibility(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailVisibility");
		
		ULibraryMenu_LoginBonus_C_DetailVisibility_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailBannerChange
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::DetailBannerChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailBannerChange");
		
		ULibraryMenu_LoginBonus_C_DetailBannerChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ItemClickChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::ItemClickChange(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ItemClickChange");
		
		ULibraryMenu_LoginBonus_C_ItemClickChange_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetInfomation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::SetInfomation(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetInfomation");
		
		ULibraryMenu_LoginBonus_C_SetInfomation_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4");
		
		ULibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ImageLoadWork
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::ImageLoadWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ImageLoadWork");
		
		ULibraryMenu_LoginBonus_C_ImageLoadWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Construct");
		
		ULibraryMenu_LoginBonus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DataCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::Initialize(int32_t DataCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Initialize");
		
		ULibraryMenu_LoginBonus_C_Initialize_Params params {};
		params.DataCount = DataCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.LoginBonusListChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::LoginBonusListChange(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.LoginBonusListChange");
		
		ULibraryMenu_LoginBonus_C_LoginBonusListChange_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Finish
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Finish");
		
		ULibraryMenu_LoginBonus_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailClose
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::DetailClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailClose");
		
		ULibraryMenu_LoginBonus_C_DetailClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BannerImageLoadCompleted
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::BannerImageLoadCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BannerImageLoadCompleted");
		
		ULibraryMenu_LoginBonus_C_BannerImageLoadCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
		
		ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnCloseDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnCloseDetailMenu");
		
		ULibraryMenu_LoginBonus_C_OnCloseDetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
		
		ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature");
		
		ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ExecuteUbergraph_LibraryMenu_LoginBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_C::ExecuteUbergraph_LibraryMenu_LoginBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ExecuteUbergraph_LibraryMenu_LoginBonus");
		
		ULibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_C::OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnFinishDelegate__DelegateSignature");
		
		ULibraryMenu_LoginBonus_C_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_LoginBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_LoginBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C");
		return ptr;
	}

}


