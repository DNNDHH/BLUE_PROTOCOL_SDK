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
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnim
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnim");
		
		UNewStepList_C_IsPlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnim");
		
		UNewStepList_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnSetupKeyGuide
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::OnSetupKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnSetupKeyGuide");
		
		UNewStepList_C_OnSetupKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnSetupTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TitleTextId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TitleBackTextID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnSetupTitle(const class FName& TitleTextId, const class FName& TitleBackTextID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnSetupTitle");
		
		UNewStepList_C_OnSetupTitle_Params params {};
		params.TitleTextId = TitleTextId;
		params.TitleBackTextID = TitleBackTextID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.Unbind
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.Unbind");
		
		UNewStepList_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.Bind
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.Bind");
		
		UNewStepList_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationOut3
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationOut3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationOut3");
		
		UNewStepList_C_IsPlayAnimationOut3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationOut2
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationOut2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationOut2");
		
		UNewStepList_C_IsPlayAnimationOut2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationOut1
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationOut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationOut1");
		
		UNewStepList_C_IsPlayAnimationOut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimOut
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimOut");
		
		UNewStepList_C_IsPlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationIn3
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationIn3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationIn3");
		
		UNewStepList_C_IsPlayAnimationIn3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationIn2
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationIn2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationIn2");
		
		UNewStepList_C_IsPlayAnimationIn2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimationIn1
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimationIn1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimationIn1");
		
		UNewStepList_C_IsPlayAnimationIn1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.IsPlayAnimIn
	 * 		Flags  -> ()
	 */
	bool UNewStepList_C::IsPlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.IsPlayAnimIn");
		
		UNewStepList_C_IsPlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationOut3
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationOut3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationOut3");
		
		UNewStepList_C_PlayAnimationOut3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationOut2
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationOut2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationOut2");
		
		UNewStepList_C_PlayAnimationOut2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationOut1
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationOut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationOut1");
		
		UNewStepList_C_PlayAnimationOut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationIn3
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationIn3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationIn3");
		
		UNewStepList_C_PlayAnimationIn3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationIn2
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationIn2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationIn2");
		
		UNewStepList_C_PlayAnimationIn2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.PlayAnimationIn1
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::PlayAnimationIn1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.PlayAnimationIn1");
		
		UNewStepList_C_PlayAnimationIn1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");
		
		UNewStepList_C_BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");
		
		UNewStepList_C_BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");
		
		UNewStepList_C_BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindAdventureBoardComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindAdventureBoardComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindAdventureBoardComponent");
		
		UNewStepList_C_BindAdventureBoardComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindAdventureBoardComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindAdventureBoardComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindAdventureBoardComponent");
		
		UNewStepList_C_UnbindAdventureBoardComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnChangeFavoriteAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardParam>              InBoardParamList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnChangeFavoriteAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnChangeFavoriteAdventureBoard");
		
		UNewStepList_C_OnChangeFavoriteAdventureBoard_Params params {};
		params.InBoardParamList = InBoardParamList;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnUpdateAdventureBoard(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateAdventureBoard");
		
		UNewStepList_C_OnUpdateAdventureBoard_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnLoadAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnLoadAdventureBoard(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnLoadAdventureBoard");
		
		UNewStepList_C_OnLoadAdventureBoard_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnAchievementedAdventureBoardPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardPanelParam>         PanelList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InPanelId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnAchievementedAdventureBoardPanel(TArray<struct FSBAdventureBoardPanelParam> PanelList, int32_t InPanelId, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnAchievementedAdventureBoardPanel");
		
		UNewStepList_C_OnAchievementedAdventureBoardPanel_Params params {};
		params.PanelList = PanelList;
		params.InPanelId = InPanelId;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnComplateAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardParam>              InBoardParamList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBMailRewardData                           InRewardDataList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnComplateAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnComplateAdventureBoard");
		
		UNewStepList_C_OnComplateAdventureBoard_Params params {};
		params.InBoardParamList = InBoardParamList;
		params.InRewardDataList = InRewardDataList;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnChangeActiveAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardParam>              InBoardParamList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnChangeActiveAdventureBoard(TArray<struct FSBAdventureBoardParam> InBoardParamList, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnChangeActiveAdventureBoard");
		
		UNewStepList_C_OnChangeActiveAdventureBoard_Params params {};
		params.InBoardParamList = InBoardParamList;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardParam>              InBoardParamList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBMailRewardData                           InRewardDataList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnGetRewardAdventureBoardPanel(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardPanel");
		
		UNewStepList_C_OnGetRewardAdventureBoardPanel_Params params {};
		params.InBoardParamList = InBoardParamList;
		params.InRewardDataList = InRewardDataList;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardAllPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBAdventureBoardParam>              InBoardParamList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBMailRewardData                           InRewardDataList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnGetRewardAdventureBoardAllPanel(TArray<struct FSBAdventureBoardParam> InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardAllPanel");
		
		UNewStepList_C_OnGetRewardAdventureBoardAllPanel_Params params {};
		params.InBoardParamList = InBoardParamList;
		params.InRewardDataList = InRewardDataList;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnChangeHUDDrawAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBAdventureBoardParam                      InBoardParam                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnChangeHUDDrawAdventureBoard(const struct FSBAdventureBoardParam& InBoardParam, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnChangeHUDDrawAdventureBoard");
		
		UNewStepList_C_OnChangeHUDDrawAdventureBoard_Params params {};
		params.InBoardParam = InBoardParam;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindWishlist
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindWishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindWishlist");
		
		UNewStepList_C_BindWishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindWishlist
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindWishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindWishlist");
		
		UNewStepList_C_UnbindWishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateWishlist
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::OnUpdateWishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateWishlist");
		
		UNewStepList_C_OnUpdateWishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.AddReceiver
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::AddReceiver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.AddReceiver");
		
		UNewStepList_C_AddReceiver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.RemoveReceiver
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::RemoveReceiver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.RemoveReceiver");
		
		UNewStepList_C_RemoveReceiver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnAcceptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnAcceptQuest(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnAcceptQuest");
		
		UNewStepList_C_OnAcceptQuest_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateQuestProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnUpdateQuestProgress(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateQuestProgress");
		
		UNewStepList_C_OnUpdateQuestProgress_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnCompleteQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnCompleteQuest(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnCompleteQuest");
		
		UNewStepList_C_OnCompleteQuest_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnCancelQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnCancelQuest(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnCancelQuest");
		
		UNewStepList_C_OnCancelQuest_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.QuestListDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::QuestListDebug(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.QuestListDebug");
		
		UNewStepList_C_QuestListDebug_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateRouteGuideSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnUpdateRouteGuideSetting(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateRouteGuideSetting");
		
		UNewStepList_C_OnUpdateRouteGuideSetting_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnLoadRouteGuideQuestId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnLoadRouteGuideQuestId(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnLoadRouteGuideQuestId");
		
		UNewStepList_C_OnLoadRouteGuideQuestId_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.CustomEvent_1");
		
		UNewStepList_C_CustomEvent_1_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.CustomEvent_2");
		
		UNewStepList_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnStartNFTArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnStartNFTArea(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnStartNFTArea");
		
		UNewStepList_C_OnStartNFTArea_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnEndNFTArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnEndNFTArea(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnEndNFTArea");
		
		UNewStepList_C_OnEndNFTArea_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindPlayer
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindPlayer");
		
		UNewStepList_C_BindPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindPlayer
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindPlayer");
		
		UNewStepList_C_UnbindPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindGetMyCharaInfo
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindGetMyCharaInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindGetMyCharaInfo");
		
		UNewStepList_C_BindGetMyCharaInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindGetMyCharaInfo
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindGetMyCharaInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindGetMyCharaInfo");
		
		UNewStepList_C_UnbindGetMyCharaInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnGetMyCharaInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNewStepList_C::OnGetMyCharaInfo(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnGetMyCharaInfo");
		
		UNewStepList_C_OnGetMyCharaInfo_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindQuestComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindQuestComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindQuestComponent");
		
		UNewStepList_C_BindQuestComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindQuestComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindQuestComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindQuestComponent");
		
		UNewStepList_C_UnbindQuestComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnAcceptedQuestList
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::OnAcceptedQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnAcceptedQuestList");
		
		UNewStepList_C_OnAcceptedQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindCommonComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindCommonComponent");
		
		UNewStepList_C_BindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindCommonComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindCommonComponent");
		
		UNewStepList_C_UnbindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnSaveQuestCheckList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNewStepList_C::OnSaveQuestCheckList(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnSaveQuestCheckList");
		
		UNewStepList_C_OnSaveQuestCheckList_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindWarehouseAbilityComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindWarehouseAbilityComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindWarehouseAbilityComponent");
		
		UNewStepList_C_BindWarehouseAbilityComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindWarehouseAbilityComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindWarehouseAbilityComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindWarehouseAbilityComponent");
		
		UNewStepList_C_UnbindWarehouseAbilityComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnWarehouseAbilityUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBWarehouseAbilityNotifyUIInfo>     UIInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNewStepList_C::OnWarehouseAbilityUpdate(TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnWarehouseAbilityUpdate");
		
		UNewStepList_C_OnWarehouseAbilityUpdate_Params params {};
		params.UIInfo = UIInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindInterruptQuestComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindInterruptQuestComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindInterruptQuestComponent");
		
		UNewStepList_C_BindInterruptQuestComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindInterruptQuestComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindInterruptQuestComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindInterruptQuestComponent");
		
		UNewStepList_C_UnbindInterruptQuestComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnJoinInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInFirst                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNewStepList_C::OnJoinInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnJoinInterruptQuest");
		
		UNewStepList_C_OnJoinInterruptQuest_Params params {};
		params.InComponent = InComponent;
		params.bInFirst = bInFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnSuccessInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNewStepList_C::OnSuccessInterruptQuest(const class FName& InQuestId, bool InSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnSuccessInterruptQuest");
		
		UNewStepList_C_OnSuccessInterruptQuest_Params params {};
		params.InQuestId = InQuestId;
		params.InSuccess = InSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnFailedInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnFailedInterruptQuest(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnFailedInterruptQuest");
		
		UNewStepList_C_OnFailedInterruptQuest_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateProgressInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnUpdateProgressInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateProgressInterruptQuest");
		
		UNewStepList_C_OnUpdateProgressInterruptQuest_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnRepInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInterruptQuestPlayInfo                   InPlayInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UNewStepList_C::OnRepInterruptQuest(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnRepInterruptQuest");
		
		UNewStepList_C_OnRepInterruptQuest_Params params {};
		params.InPlayInfo = InPlayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnLeaveInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnLeaveInterruptQuest(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnLeaveInterruptQuest");
		
		UNewStepList_C_OnLeaveInterruptQuest_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindAdventurerComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindAdventurerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindAdventurerComponent");
		
		UNewStepList_C_BindAdventurerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindAdventurerComponent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindAdventurerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindAdventurerComponent");
		
		UNewStepList_C_UnbindAdventurerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnAdventurerRankChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnAdventurerRankChange(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnAdventurerRankChange");
		
		UNewStepList_C_OnAdventurerRankChange_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindGameState
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindGameState");
		
		UNewStepList_C_BindGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindGameState
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindGameState");
		
		UNewStepList_C_UnbindGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnClearConditionChange
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::OnClearConditionChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnClearConditionChange");
		
		UNewStepList_C_OnClearConditionChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnClearConditionUpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDungeonClearConditionProgressItemInfo      InProgressItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		int32_t                                            InStepNum                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InProgressIndex                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnClearConditionUpdateProgress(const struct FDungeonClearConditionProgressItemInfo& InProgressItem, int32_t InStepNum, int32_t InProgressIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnClearConditionUpdateProgress");
		
		UNewStepList_C_OnClearConditionUpdateProgress_Params params {};
		params.InProgressItem = InProgressItem;
		params.InStepNum = InStepNum;
		params.InProgressIndex = InProgressIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnClearConditionChangeStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurStep                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnClearConditionChangeStep(int32_t InCurStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnClearConditionChangeStep");
		
		UNewStepList_C_OnClearConditionChangeStep_Params params {};
		params.InCurStep = InCurStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnClearConditionComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDungeonName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnClearConditionComplete(const class FName& InDungeonName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnClearConditionComplete");
		
		UNewStepList_C_OnClearConditionComplete_Params params {};
		params.InDungeonName = InDungeonName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindUpdateItems
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindUpdateItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindUpdateItems");
		
		UNewStepList_C_BindUpdateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindUpdateItems
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindUpdateItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindUpdateItems");
		
		UNewStepList_C_UnbindUpdateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUpdateItems
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::OnUpdateItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUpdateItems");
		
		UNewStepList_C_OnUpdateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.CustomEvent_3");
		
		UNewStepList_C_CustomEvent_3_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::CustomEvent_4(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.CustomEvent_4");
		
		UNewStepList_C_CustomEvent_4_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnAnimationFinished");
		
		UNewStepList_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.BindUIVisible
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::BindUIVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.BindUIVisible");
		
		UNewStepList_C_BindUIVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.UnbindUIVisible
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::UnbindUIVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.UnbindUIVisible");
		
		UNewStepList_C_UnbindUIVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.OnUIVisibleSettingChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNewStepList_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.OnUIVisibleSettingChange");
		
		UNewStepList_C_OnUIVisibleSettingChange_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.RequestSetupList
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::RequestSetupList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.RequestSetupList");
		
		UNewStepList_C_RequestSetupList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.CustomEvent");
		
		UNewStepList_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.Construct
	 * 		Flags  -> ()
	 */
	void UNewStepList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.Construct");
		
		UNewStepList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NewStepList.NewStepList_C.ExecuteUbergraph_NewStepList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewStepList_C::ExecuteUbergraph_NewStepList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NewStepList.NewStepList_C.ExecuteUbergraph_NewStepList");
		
		UNewStepList_C_ExecuteUbergraph_NewStepList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNewStepList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNewStepList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewStepList.NewStepList_C");
		return ptr;
	}

}


