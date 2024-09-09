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
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetKeyCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeyCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillBoardTabBox_C::SetKeyCheck(bool KeyCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetKeyCheck");
		
		UWBP_SkillBoardTabBox_C_SetKeyCheck_Params params {};
		params.KeyCheck = KeyCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillBoardTabBox_C::Select(ESBClassType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Select");
		
		UWBP_SkillBoardTabBox_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CheckPagerBtn
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::CheckPagerBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CheckPagerBtn");
		
		UWBP_SkillBoardTabBox_C_CheckPagerBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_SkillBoardTabBox_Banner_C*              Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillBoardTabBox_C::SetBannerSelect(class UWBP_SkillBoardTabBox_Banner_C* Banner, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerSelect");
		
		UWBP_SkillBoardTabBox_C_SetBannerSelect_Params params {};
		params.Banner = Banner;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerEnable
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::SetBannerEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerEnable");
		
		UWBP_SkillBoardTabBox_C_SetBannerEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateBannerInfo
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::UpdateBannerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateBannerInfo");
		
		UWBP_SkillBoardTabBox_C_UpdateBannerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateTabInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillBoardTabBox_C::UpdateTabInfo(bool Prev, bool Next, int32_t Click)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateTabInfo");
		
		UWBP_SkillBoardTabBox_C_UpdateTabInfo_Params params {};
		params.Prev = Prev;
		params.Next = Next;
		params.Click = Click;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Create List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESBClassType>                               EventList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SkillBoardTabBox_C::CreateList(TArray<ESBClassType>* EventList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Create List");
		
		UWBP_SkillBoardTabBox_C_CreateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventList != nullptr)
			*EventList = params.EventList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Initialize");
		
		UWBP_SkillBoardTabBox_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillBoardTabBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.PreConstruct");
		
		UWBP_SkillBoardTabBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Construct");
		
		UWBP_SkillBoardTabBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.LRVisibleUpdeta
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::LRVisibleUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.LRVisibleUpdeta");
		
		UWBP_SkillBoardTabBox_C_LRVisibleUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Bind
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Bind");
		
		UWBP_SkillBoardTabBox_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillBoardTabBox_C::CustomEvent_1(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_1");
		
		UWBP_SkillBoardTabBox_C_CustomEvent_1_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_2");
		
		UWBP_SkillBoardTabBox_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Unbind
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Unbind");
		
		UWBP_SkillBoardTabBox_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Destruct");
		
		UWBP_SkillBoardTabBox_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_3
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_3");
		
		UWBP_SkillBoardTabBox_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_4
	 * 		Flags  -> ()
	 */
	void UWBP_SkillBoardTabBox_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_4");
		
		UWBP_SkillBoardTabBox_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.ExecuteUbergraph_WBP_SkillBoardTabBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillBoardTabBox_C::ExecuteUbergraph_WBP_SkillBoardTabBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.ExecuteUbergraph_WBP_SkillBoardTabBox");
		
		UWBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.OnClickBanner__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       Typr                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillBoardTabBox_C::OnClickBanner__DelegateSignature(ESBClassType Typr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.OnClickBanner__DelegateSignature");
		
		UWBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature_Params params {};
		params.Typr = Typr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillBoardTabBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillBoardTabBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C");
		return ptr;
	}

}


