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
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ChangePickupRewardIfNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScrollOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::ChangePickupRewardIfNeeded(float ScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ChangePickupRewardIfNeeded");
		
		UUMG_SeasonPassMenuReward_v106_C_ChangePickupRewardIfNeeded_Params params {};
		params.ScrollOffset = ScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.CreateRewardRankItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardData*                 Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::CreateRewardRankItem(class USBSeasonPassMenuRewardData* Data, int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.CreateRewardRankItem");
		
		UUMG_SeasonPassMenuReward_v106_C_CreateRewardRankItem_Params params {};
		params.Data = Data;
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ClearRewardRankItem
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::ClearRewardRankItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ClearRewardRankItem");
		
		UUMG_SeasonPassMenuReward_v106_C_ClearRewardRankItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardData*                 Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::SetData(class USBSeasonPassMenuRewardData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.SetData");
		
		UUMG_SeasonPassMenuReward_v106_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRankRewardItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             RewardItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::OnClickRankRewardItemIcon(class USBSeasonPassMenuRewardItemData* RewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRankRewardItemIcon");
		
		UUMG_SeasonPassMenuReward_v106_C_OnClickRankRewardItemIcon_Params params {};
		params.RewardItemData = RewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             RewardItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature");
		
		UUMG_SeasonPassMenuReward_v106_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature_Params params {};
		params.RewardItemData = RewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
		
		UUMG_SeasonPassMenuReward_v106_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Construct");
		
		UUMG_SeasonPassMenuReward_v106_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ScrollToRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimateScroll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::ScrollToRank(int32_t Rank, bool AnimateScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ScrollToRank");
		
		UUMG_SeasonPassMenuReward_v106_C_ScrollToRank_Params params {};
		params.Rank = Rank;
		params.AnimateScroll = AnimateScroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::OnUpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateData");
		
		UUMG_SeasonPassMenuReward_v106_C_OnUpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesign
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::UpdateDesign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesign");
		
		UUMG_SeasonPassMenuReward_v106_C_UpdateDesign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesignAndData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::UpdateDesignAndData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesignAndData");
		
		UUMG_SeasonPassMenuReward_v106_C_UpdateDesignAndData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.PreConstruct");
		
		UUMG_SeasonPassMenuReward_v106_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateSeasonPassRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::OnUpdateSeasonPassRank(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateSeasonPassRank");
		
		UUMG_SeasonPassMenuReward_v106_C_OnUpdateSeasonPassRank_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Destruct");
		
		UUMG_SeasonPassMenuReward_v106_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ExecuteUbergraph_UMG_SeasonPassMenuReward_v106
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::ExecuteUbergraph_UMG_SeasonPassMenuReward_v106(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ExecuteUbergraph_UMG_SeasonPassMenuReward_v106");
		
		UUMG_SeasonPassMenuReward_v106_C_ExecuteUbergraph_UMG_SeasonPassMenuReward_v106_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickUpgrade__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuReward_v106_C::OnClickUpgrade__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickUpgrade__DelegateSignature");
		
		UUMG_SeasonPassMenuReward_v106_C_OnClickUpgrade__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRewardItemIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             RewardItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuReward_v106_C::OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRewardItemIcon__DelegateSignature");
		
		UUMG_SeasonPassMenuReward_v106_C_OnClickRewardItemIcon__DelegateSignature_Params params {};
		params.RewardItemData = RewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassMenuReward_v106_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassMenuReward_v106_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C");
		return ptr;
	}

}


