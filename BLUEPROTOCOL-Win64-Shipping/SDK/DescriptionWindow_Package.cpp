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
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.Refresh
	 * 		Flags  -> ()
	 */
	void UDescriptionWindow_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.Refresh");
		
		UDescriptionWindow_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetMoveDescriptionWindow
	 * 		Flags  -> ()
	 */
	void UDescriptionWindow_C::SetMoveDescriptionWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetMoveDescriptionWindow");
		
		UDescriptionWindow_C_SetMoveDescriptionWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsEnabled");
		
		UDescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsInUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::SetWeaponStickerInUseButtonIsInUse(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsInUse");
		
		UDescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetBagStorageViewMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBagStorageViewMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::SetBagStorageViewMode(bool bBagStorageViewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetBagStorageViewMode");
		
		UDescriptionWindow_C_SetBagStorageViewMode_Params params {};
		params.bBagStorageViewMode = bBagStorageViewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.IsClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClose                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::IsClose(bool* bClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.IsClose");
		
		UDescriptionWindow_C_IsClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bClose != nullptr)
			*bClose = params.bClose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.RefleshButton
	 * 		Flags  -> ()
	 */
	void UDescriptionWindow_C::RefleshButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.RefleshButton");
		
		UDescriptionWindow_C_RefleshButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetRegisterMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRegisterMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::SetRegisterMode(bool IsRegisterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetRegisterMode");
		
		UDescriptionWindow_C_SetRegisterMode_Params params {};
		params.IsRegisterMode = IsRegisterMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UDescriptionWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.Close");
		
		UDescriptionWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::Open(const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.Open");
		
		UDescriptionWindow_C_Open_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetItemLoadAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::SetItemLoadAfter(class UUMG_CaptureStudio_C* CaptureStudio, EItemType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetItemLoadAfter");
		
		UDescriptionWindow_C_SetItemLoadAfter_Params params {};
		params.CaptureStudio = CaptureStudio;
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::SetItem(struct FInventoryData* InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.SetItem");
		
		UDescriptionWindow_C_SetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryData != nullptr)
			*InventoryData = params.InventoryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.PreConstruct");
		
		UDescriptionWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UDescriptionWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.Construct");
		
		UDescriptionWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.OnButtonClicked_Bind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::OnButtonClicked_Bind(EDescripionButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.OnButtonClicked_Bind");
		
		UDescriptionWindow_C_OnButtonClicked_Bind_Params params {};
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDescriptionWindow_C::BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");
		
		UDescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature");
		
		UDescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.ExecuteUbergraph_DescriptionWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::ExecuteUbergraph_DescriptionWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.ExecuteUbergraph_DescriptionWindow");
		
		UDescriptionWindow_C_ExecuteUbergraph_DescriptionWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDescriptionWindow_C::OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerInUseButtonPressed__DelegateSignature");
		
		UDescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDescriptionWindow_C::OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerButtonPressed__DelegateSignature");
		
		UDescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DescriptionWindow.DescriptionWindow_C.OnClickedButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDescriptionWindow_C::OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DescriptionWindow.DescriptionWindow_C.OnClickedButton__DelegateSignature");
		
		UDescriptionWindow_C_OnClickedButton__DelegateSignature_Params params {};
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDescriptionWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDescriptionWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DescriptionWindow.DescriptionWindow_C");
		return ptr;
	}

}


