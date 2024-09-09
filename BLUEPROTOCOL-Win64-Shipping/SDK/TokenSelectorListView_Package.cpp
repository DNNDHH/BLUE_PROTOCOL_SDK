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
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.SetCraftCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::SetCraftCount(int32_t CraftCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.SetCraftCount");
		
		UTokenSelectorListView_C_SetCraftCount_Params params {};
		params.CraftCount = CraftCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.SetResepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftMasterData                            RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTokenSelectorListView_C::SetResepiData(const struct FCraftMasterData& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.SetResepiData");
		
		UTokenSelectorListView_C_SetResepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.UpdateCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTokenSelectorListItem_C*                    OnSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::UpdateCheck(class UTokenSelectorListItem_C* OnSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.UpdateCheck");
		
		UTokenSelectorListView_C_UpdateCheck_Params params {};
		params.OnSelect = OnSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.Initialize
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.Initialize");
		
		UTokenSelectorListView_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.Construct
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.Construct");
		
		UTokenSelectorListView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.OnSelectTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTokenSelectorListItem_C*                    Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::OnSelectTicket(class UTokenSelectorListItem_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.OnSelectTicket");
		
		UTokenSelectorListView_C_OnSelectTicket_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.Close
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.Close");
		
		UTokenSelectorListView_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UTokenSelectorListView_C_BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.SetWindowPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::SetWindowPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.SetWindowPosition");
		
		UTokenSelectorListView_C_SetWindowPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.Set Window Alignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::SetWindowAlignment(const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.Set Window Alignment");
		
		UTokenSelectorListView_C_SetWindowAlignment_Params params {};
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");
		
		UTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.OnPressCancel");
		
		UTokenSelectorListView_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.Destruct");
		
		UTokenSelectorListView_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1");
		
		UTokenSelectorListView_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.ExecuteUbergraph_TokenSelectorListView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::ExecuteUbergraph_TokenSelectorListView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.ExecuteUbergraph_TokenSelectorListView");
		
		UTokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.OnSelectClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenSelectorListView_C::OnSelectClose__DelegateSignature(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.OnSelectClose__DelegateSignature");
		
		UTokenSelectorListView_C_OnSelectClose__DelegateSignature_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenSelectorListView.TokenSelectorListView_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenSelectorListView_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenSelectorListView.TokenSelectorListView_C.OnClose__DelegateSignature");
		
		UTokenSelectorListView_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTokenSelectorListView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTokenSelectorListView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TokenSelectorListView.TokenSelectorListView_C");
		return ptr;
	}

}


