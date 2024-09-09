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
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.GetBannerTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::GetBannerTexture(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.GetBannerTexture");
		
		UWBP_NaEventBannerItem_C_GetBannerTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.UpdateNewIcon
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBannerItem_C::UpdateNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.UpdateNewIcon");
		
		UWBP_NaEventBannerItem_C_UpdateNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::SetData(class USBNaEventData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetData");
		
		UWBP_NaEventBannerItem_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBannerItem_C::BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventBannerItem_C_BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_NaEventBannerItem_C::SetSelected(bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetSelected");
		
		UWBP_NaEventBannerItem_C_SetSelected_Params params {};
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnChangeSelectedEventId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedEventId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::OnChangeSelectedEventId(int32_t SelectedEventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnChangeSelectedEventId");
		
		UWBP_NaEventBannerItem_C_OnChangeSelectedEventId_Params params {};
		params.SelectedEventId = SelectedEventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBannerItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Construct");
		
		UWBP_NaEventBannerItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBannerItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Destruct");
		
		UWBP_NaEventBannerItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnAnyUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::OnAnyUpdate(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnAnyUpdate");
		
		UWBP_NaEventBannerItem_C_OnAnyUpdate_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.ExecuteUbergraph_WBP_NaEventBannerItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::ExecuteUbergraph_WBP_NaEventBannerItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.ExecuteUbergraph_WBP_NaEventBannerItem");
		
		UWBP_NaEventBannerItem_C_ExecuteUbergraph_WBP_NaEventBannerItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBannerItem_C::OnClicked__DelegateSignature(int32_t EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnClicked__DelegateSignature");
		
		UWBP_NaEventBannerItem_C_OnClicked__DelegateSignature_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventBannerItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventBannerItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventBannerItem.WBP_NaEventBannerItem_C");
		return ptr;
	}

}


