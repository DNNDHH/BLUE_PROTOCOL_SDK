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
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GetMailDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         MailDatas                                                  (Parm, OutParm)
	 */
	void UMailAttachmentsAcceptWindow_C::GetMailDatas(TArray<struct FSBMailData>* MailDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GetMailDatas");
		
		UMailAttachmentsAcceptWindow_C_GetMailDatas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MailDatas != nullptr)
			*MailDatas = params.MailDatas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckLimitOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         MailData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            selectValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentsAcceptWindow_C::CheckLimitOver(TArray<struct FSBMailData> MailData, int32_t* selectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckLimitOver");
		
		UMailAttachmentsAcceptWindow_C_CheckLimitOver_Params params {};
		params.MailData = MailData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selectValue != nullptr)
			*selectValue = params.selectValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.AcceptFlagCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AcceptFlag                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentsAcceptWindow_C::AcceptFlagCheck(bool* AcceptFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.AcceptFlagCheck");
		
		UMailAttachmentsAcceptWindow_C_AcceptFlagCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AcceptFlag != nullptr)
			*AcceptFlag = params.AcceptFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetWarningText
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::SetWarningText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetWarningText");
		
		UMailAttachmentsAcceptWindow_C_SetWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetAcceptWindowTitle
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::SetAcceptWindowTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetAcceptWindowTitle");
		
		UMailAttachmentsAcceptWindow_C_SetAcceptWindowTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Equip                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentsAcceptWindow_C::CheckEquip(bool* Equip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckEquip");
		
		UMailAttachmentsAcceptWindow_C_CheckEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Equip != nullptr)
			*Equip = params.Equip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.On_Cmb_ViewType_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UMailAttachmentsAcceptWindow_C::On_Cmb_ViewType_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.On_Cmb_ViewType_GenerateWidget_1");
		
		UMailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateCheckBoxVisibility
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::UpdateCheckBoxVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateCheckBoxVisibility");
		
		UMailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateViewType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentsAcceptWindow_C::UpdateViewType(const class FString& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateViewType");
		
		UMailAttachmentsAcceptWindow_C_UpdateViewType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateVisibleList
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::GenerateVisibleList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateVisibleList");
		
		UMailAttachmentsAcceptWindow_C_GenerateVisibleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckStorageCapacities
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::CheckStorageCapacities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckStorageCapacities");
		
		UMailAttachmentsAcceptWindow_C_CheckStorageCapacities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateAcceptButtonEnable
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::UpdateAcceptButtonEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateAcceptButtonEnable");
		
		UMailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateMailIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              List1                                                      (Parm, OutParm)
	 */
	void UMailAttachmentsAcceptWindow_C::GenerateMailIds(TArray<class FString>* List1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateMailIds");
		
		UMailAttachmentsAcceptWindow_C_GenerateMailIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (List1 != nullptr)
			*List1 = params.List1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateStorageList
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::GenerateStorageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateStorageList");
		
		UMailAttachmentsAcceptWindow_C_GenerateStorageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateAttachmentGrid
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::GenerateAttachmentGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateAttachmentGrid");
		
		UMailAttachmentsAcceptWindow_C_GenerateAttachmentGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentsAcceptWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.PreConstruct");
		
		UMailAttachmentsAcceptWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Construct");
		
		UMailAttachmentsAcceptWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Close");
		
		UMailAttachmentsAcceptWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetMailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         MailDatas                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMailAttachmentsAcceptWindow_C::SetMailData(TArray<struct FSBMailData>* MailDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetMailData");
		
		UMailAttachmentsAcceptWindow_C_SetMailData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MailDatas != nullptr)
			*MailDatas = params.MailDatas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UI_Cancel
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::UI_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UI_Cancel");
		
		UMailAttachmentsAcceptWindow_C_UI_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnCloseDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentsAcceptWindow_C::OnCloseDetail(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnCloseDetail");
		
		UMailAttachmentsAcceptWindow_C_OnCloseDetail_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UMailAttachmentsAcceptWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.ExecuteUbergraph_MailAttachmentsAcceptWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentsAcceptWindow_C::ExecuteUbergraph_MailAttachmentsAcceptWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.ExecuteUbergraph_MailAttachmentsAcceptWindow");
		
		UMailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnRequesting__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::OnRequesting__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnRequesting__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_OnRequesting__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailAttachmentsAcceptWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnClose__DelegateSignature");
		
		UMailAttachmentsAcceptWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailAttachmentsAcceptWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailAttachmentsAcceptWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C");
		return ptr;
	}

}


