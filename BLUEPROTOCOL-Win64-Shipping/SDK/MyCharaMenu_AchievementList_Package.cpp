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
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.FindAchievementFromList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExists                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMyCharaMenu_AchievementList_Item_C*         OutListItem                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_C::FindAchievementFromList(int32_t InAchievementId, bool* IsExists, class UMyCharaMenu_AchievementList_Item_C** OutListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.FindAchievementFromList");
		
		UMyCharaMenu_AchievementList_C_FindAchievementFromList_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExists != nullptr)
			*IsExists = params.IsExists;
		if (OutListItem != nullptr)
			*OutListItem = params.OutListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.IsClosing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsClosing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_C::IsClosing(bool* OutIsClosing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.IsClosing");
		
		UMyCharaMenu_AchievementList_C_IsClosing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsClosing != nullptr)
			*OutIsClosing = params.OutIsClosing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Close
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Close");
		
		UMyCharaMenu_AchievementList_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Destruct");
		
		UMyCharaMenu_AchievementList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.PreConstruct");
		
		UMyCharaMenu_AchievementList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Construct");
		
		UMyCharaMenu_AchievementList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Setup_AchievementList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAchievementInfo>                  InAchievements                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_AchievementList_C::Setup_AchievementList(TArray<struct FSBAchievementInfo> InAchievements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Setup_AchievementList");
		
		UMyCharaMenu_AchievementList_C_Setup_AchievementList_Params params {};
		params.InAchievements = InAchievements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelected_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_Item_C*         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_C::OnSelected_Item(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelected_Item");
		
		UMyCharaMenu_AchievementList_C_OnSelected_Item_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievementDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBAchievementInfo>                  AchievementList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_AchievementList_C::OnLoadAchievementDelegate(bool Result, TArray<struct FSBAchievementInfo> AchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievementDelegate");
		
		UMyCharaMenu_AchievementList_C_OnLoadAchievementDelegate_Params params {};
		params.Result = Result;
		params.AchievementList = AchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnPress_Cancel");
		
		UMyCharaMenu_AchievementList_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnAnimationFinished");
		
		UMyCharaMenu_AchievementList_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_AchievementList_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UMyCharaMenu_AchievementList_C_BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.ExecuteUbergraph_MyCharaMenu_AchievementList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_C::ExecuteUbergraph_MyCharaMenu_AchievementList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.ExecuteUbergraph_MyCharaMenu_AchievementList");
		
		UMyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelectAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_C::OnSelectAchievement__DelegateSignature(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelectAchievement__DelegateSignature");
		
		UMyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_C::OnLoadAchievement__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievement__DelegateSignature");
		
		UMyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_AchievementList_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnClose__DelegateSignature");
		
		UMyCharaMenu_AchievementList_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_AchievementList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_AchievementList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C");
		return ptr;
	}

}


