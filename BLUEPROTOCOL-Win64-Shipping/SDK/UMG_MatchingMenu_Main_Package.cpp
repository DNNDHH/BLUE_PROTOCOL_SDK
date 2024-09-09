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
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.RequestPreLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMapInfo>                          InDungeonMapInfos                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_MatchingMenu_Main_C::RequestPreLoad(TArray<struct FSBMapInfo>* InDungeonMapInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.RequestPreLoad");
		
		UUMG_MatchingMenu_Main_C_RequestPreLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDungeonMapInfos != nullptr)
			*InDungeonMapInfos = params.InDungeonMapInfos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OutAnimation
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::OutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OutAnimation");
		
		UUMG_MatchingMenu_Main_C_OutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.InAnimation
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::InAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.InAnimation");
		
		UUMG_MatchingMenu_Main_C_InAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.CloseMenu");
		
		UUMG_MatchingMenu_Main_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InitDungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Main_C::Init(const class FName& InitDungeonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Init");
		
		UUMG_MatchingMenu_Main_C_Init_Params params {};
		params.InitDungeonId = InitDungeonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Construct");
		
		UUMG_MatchingMenu_Main_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Main_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnAnimationFinished");
		
		UUMG_MatchingMenu_Main_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ShowNoLeaderAlert
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::ShowNoLeaderAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ShowNoLeaderAlert");
		
		UUMG_MatchingMenu_Main_C_ShowNoLeaderAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.DoMatching
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::DoMatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.DoMatching");
		
		UUMG_MatchingMenu_Main_C_DoMatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel_YesNoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Main_C::PartyRecruitCancel_YesNoDialog(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel_YesNoDialog");
		
		UUMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnCancelRecruit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            iRetCode                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Main_C::OnCancelRecruit(bool bWasSuccessful, int32_t iRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnCancelRecruit");
		
		UUMG_MatchingMenu_Main_C_OnCancelRecruit_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.iRetCode = iRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::PartyRecruitCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel");
		
		UUMG_MatchingMenu_Main_C_PartyRecruitCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ExecuteUbergraph_UMG_MatchingMenu_Main
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Main_C::ExecuteUbergraph_UMG_MatchingMenu_Main(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ExecuteUbergraph_UMG_MatchingMenu_Main");
		
		UUMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_Main_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Main_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClose__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnStartMatchmaking__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMapInfo>                          DungeonMapInfoArray                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUnlimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Main_C::OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnStartMatchmaking__DelegateSignature");
		
		UUMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature_Params params {};
		params.bUnlimit = bUnlimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DungeonMapInfoArray != nullptr)
			*DungeonMapInfoArray = params.DungeonMapInfoArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C");
		return ptr;
	}

}


