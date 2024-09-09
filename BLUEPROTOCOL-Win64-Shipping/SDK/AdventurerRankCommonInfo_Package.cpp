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
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.On_Image_AdventureBoardIcon_MouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UAdventurerRankCommonInfo_C::On_Image_AdventureBoardIcon_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.On_Image_AdventureBoardIcon_MouseButtonDown_1");
		
		UAdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.GetGameContentID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OutGameContentId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdventurerRankCommonInfo_C::GetGameContentID(class FName* OutGameContentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.GetGameContentID");
		
		UAdventurerRankCommonInfo_C_GetGameContentID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGameContentId != nullptr)
			*OutGameContentId = params.OutGameContentId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InitText
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::InitText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InitText");
		
		UAdventurerRankCommonInfo_C_InitText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InAnimation
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::InAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InAnimation");
		
		UAdventurerRankCommonInfo_C_InAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Construct");
		
		UAdventurerRankCommonInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Destruct");
		
		UAdventurerRankCommonInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnCloseButtonClicked_Event
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::OnCloseButtonClicked_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnCloseButtonClicked_Event");
		
		UAdventurerRankCommonInfo_C_OnCloseButtonClicked_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.WidgetAnimationEvt_DetailedAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::WidgetAnimationEvt_DetailedAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.WidgetAnimationEvt_DetailedAnim_K2Node_WidgetAnimationEvent_1");
		
		UAdventurerRankCommonInfo_C_WidgetAnimationEvt_DetailedAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Init
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.Init");
		
		UAdventurerRankCommonInfo_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_BtnCmn08_SeeContents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_BtnCmn08_SeeContents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_BtnCmn08_SeeContents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_BtnCmn08_SeeContents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_CmnBtn01_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::BndEvt__AdventurerRankCommonInfo_CmnBtn01_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.BndEvt__AdventurerRankCommonInfo_CmnBtn01_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_BndEvt__AdventurerRankCommonInfo_CmnBtn01_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.ExecuteUbergraph_AdventurerRankCommonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdventurerRankCommonInfo_C::ExecuteUbergraph_AdventurerRankCommonInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.ExecuteUbergraph_AdventurerRankCommonInfo");
		
		UAdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnDetailsMode__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDetailed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventurerRankCommonInfo_C::OnDetailsMode__DelegateSignature(bool IsDetailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnDetailsMode__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature_Params params {};
		params.IsDetailed = IsDetailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnClose__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnAdventureBoardBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAdventurerRankCommonInfo_C::OnAdventureBoardBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnAdventureBoardBtn__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_OnAdventureBoardBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnGuideMessageVisibility__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventurerRankCommonInfo_C::OnGuideMessageVisibility__DelegateSignature(bool InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnGuideMessageVisibility__DelegateSignature");
		
		UAdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventurerRankCommonInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventurerRankCommonInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventurerRankCommonInfo.AdventurerRankCommonInfo_C");
		return ptr;
	}

}


