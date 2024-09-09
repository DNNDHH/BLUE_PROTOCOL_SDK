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
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetTooltipString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutTooltipString                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::GetTooltipString(class FString* OutTooltipString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetTooltipString");
		
		UMapWidget_QuestIcon_C_GetTooltipString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTooltipString != nullptr)
			*OutTooltipString = params.OutTooltipString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_QuestIcon_C::SetTooltipEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipEnable");
		
		UMapWidget_QuestIcon_C_SetTooltipEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipToIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTooltip2Line                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InToolTipText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::SetTooltipToIcon(bool IsTooltip2Line, const class FString& InToolTipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipToIcon");
		
		UMapWidget_QuestIcon_C_SetTooltipToIcon_Params params {};
		params.IsTooltip2Line = IsTooltip2Line;
		params.InToolTipText = InToolTipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::SetTooltipString(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipString");
		
		UMapWidget_QuestIcon_C_SetTooltipString_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_QuestIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetToolTipWidget_1");
		
		UMapWidget_QuestIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsClosed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_QuestIcon_C::SetIcon(int32_t InQuestIndex, bool IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetIcon");
		
		UMapWidget_QuestIcon_C_SetIcon_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.IsClosed = IsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_QuestIcon_C::BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnAnimationFinished");
		
		UMapWidget_QuestIcon_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.ExecuteUbergraph_MapWidget_QuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::ExecuteUbergraph_MapWidget_QuestIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.ExecuteUbergraph_MapWidget_QuestIcon");
		
		UMapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnPressedQuestIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_QuestIcon_C::OnPressedQuestIcon__DelegateSignature(int32_t InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnPressedQuestIcon__DelegateSignature");
		
		UMapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_QuestIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_QuestIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_QuestIcon.MapWidget_QuestIcon_C");
		return ptr;
	}

}


