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
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDetailOpenSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CheckType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::GetDetailOpenSetting(const class FName& CheckType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDetailOpenSetting");
		
		ULibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting_Params params {};
		params.CheckType = CheckType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.UpdateDetailOpenSetting
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::UpdateDetailOpenSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.UpdateDetailOpenSetting");
		
		ULibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetActiveArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::SetActiveArea(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetActiveArea");
		
		ULibraryMenu_Monster_DetailTabMenu_C_SetActiveArea_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetAreaListWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULibraryMenu_MonsterAreaListItem_C*          OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::GetAreaListWidget(int32_t Index, class ULibraryMenu_MonsterAreaListItem_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetAreaListWidget");
		
		ULibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.MakeAreaList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::MakeAreaList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.MakeAreaList");
		
		ULibraryMenu_Monster_DetailTabMenu_C_MakeAreaList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.CloseAreaList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::CloseAreaList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.CloseAreaList");
		
		ULibraryMenu_Monster_DetailTabMenu_C_CloseAreaList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OpenAreaList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::OpenAreaList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OpenAreaList");
		
		ULibraryMenu_Monster_DetailTabMenu_C_OpenAreaList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AreaIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::ChangeEnemyData(int32_t Type, int32_t Index, int32_t AreaIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyData");
		
		ULibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData_Params params {};
		params.Type = Type;
		params.Index = Index;
		params.AreaIndex = AreaIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetEnemyPopAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AreaIds                                                    (Parm, OutParm)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::GetEnemyPopAreaData(TArray<class FString>* AreaIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetEnemyPopAreaData");
		
		ULibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaIds != nullptr)
			*AreaIds = params.AreaIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDropItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULibraryMenu_Monster_DropItem_C*             Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::GetDropItemWidget(int32_t Index, class ULibraryMenu_Monster_DropItem_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDropItemWidget");
		
		ULibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Update Drop Item Widget Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::UpdateDropItemWidgetVisibility(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Update Drop Item Widget Visibility");
		
		ULibraryMenu_Monster_DetailTabMenu_C_UpdateDropItemWidgetVisibility_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Initialize Drop Item List
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::InitializeDropItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Initialize Drop Item List");
		
		ULibraryMenu_Monster_DetailTabMenu_C_InitializeDropItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyViewData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChangeEnemyId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::ChangeEnemyViewData(const class FName& ChangeEnemyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyViewData");
		
		ULibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData_Params params {};
		params.ChangeEnemyId = ChangeEnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetEnemyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLibraryEnemyData                         EnemyData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::SetEnemyData(const struct FSBLibraryEnemyData& EnemyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetEnemyData");
		
		ULibraryMenu_Monster_DetailTabMenu_C_SetEnemyData_Params params {};
		params.EnemyData = EnemyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ButtonTextColorChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnCursor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::ButtonTextColorChange(bool OnCursor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ButtonTextColorChange");
		
		ULibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange_Params params {};
		params.OnCursor = OnCursor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaItemSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaItemSelect(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaItemSelect");
		
		ULibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAnimationFinished");
		
		ULibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Construct");
		
		ULibraryMenu_Monster_DetailTabMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu");
		
		ULibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListVisibleChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListVisibleChange__DelegateSignature(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListVisibleChange__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListSelect__DelegateSignature(int32_t Index, const class FName& EnemyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListSelect__DelegateSignature");
		
		ULibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature_Params params {};
		params.Index = Index;
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_DetailTabMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_DetailTabMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C");
		return ptr;
	}

}


