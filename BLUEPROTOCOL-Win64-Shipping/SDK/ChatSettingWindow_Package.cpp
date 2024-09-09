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
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSettingWindow_C::SetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.SetVisible");
		
		UChatSettingWindow_C_SetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.HideWindow");
		
		UChatSettingWindow_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       LogVisibleStatusList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChatSettingWindow_C::ShowWindow(TArray<bool>* LogVisibleStatusList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.ShowWindow");
		
		UChatSettingWindow_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LogVisibleStatusList != nullptr)
			*LogVisibleStatusList = params.LogVisibleStatusList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.Close");
		
		UChatSettingWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.Construct");
		
		UChatSettingWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.Destruct");
		
		UChatSettingWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Size
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_Size(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Size");
		
		UChatSettingWindow_C_OnChange_Size_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_Time(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Time");
		
		UChatSettingWindow_C_OnChange_Time_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_StartKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_StartKey(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_StartKey");
		
		UChatSettingWindow_C_OnChange_StartKey_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Main
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_Main(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Main");
		
		UChatSettingWindow_C_OnChange_Main_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_Sub1(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub1");
		
		UChatSettingWindow_C_OnChange_Sub1_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectBtnId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::OnChange_Sub2(int32_t InSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub2");
		
		UChatSettingWindow_C_OnChange_Sub2_Params params {};
		params.InSelectBtnId = InSelectBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		UChatSettingWindow_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UChatSettingWindow_C_BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.ExecuteUbergraph_ChatSettingWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSettingWindow_C::ExecuteUbergraph_ChatSettingWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.ExecuteUbergraph_ChatSettingWindow");
		
		UChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnLogDispTime__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::OnLogDispTime__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnLogDispTime__DelegateSignature");
		
		UChatSettingWindow_C_OnLogDispTime__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnRefreshChatLogs__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::OnRefreshChatLogs__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnRefreshChatLogs__DelegateSignature");
		
		UChatSettingWindow_C_OnRefreshChatLogs__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSettingWindow.ChatSettingWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatSettingWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSettingWindow.ChatSettingWindow_C.OnClose__DelegateSignature");
		
		UChatSettingWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatSettingWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatSettingWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatSettingWindow.ChatSettingWindow_C");
		return ptr;
	}

}


