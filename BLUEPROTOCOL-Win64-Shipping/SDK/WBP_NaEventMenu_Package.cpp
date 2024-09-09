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
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetVisibleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_NaEventMenu_C::SetVisibleButton(class UWidget* Button, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetVisibleButton");
		
		UWBP_NaEventMenu_C_SetVisibleButton_Params params {};
		params.Button = Button;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetBgImageTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::GetBgImageTexture(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetBgImageTexture");
		
		UWBP_NaEventMenu_C_GetBgImageTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetTopImageTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::GetTopImageTexture(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetTopImageTexture");
		
		UWBP_NaEventMenu_C_GetTopImageTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetImageTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTopImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_NaEventMenu_C::GetImageTexture(const class FName& ID, bool bIsTopImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetImageTexture");
		
		UWBP_NaEventMenu_C_GetImageTexture_Params params {};
		params.ID = ID;
		params.bIsTopImage = bIsTopImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateNewIcon
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::UpdateNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateNewIcon");
		
		UWBP_NaEventMenu_C_UpdateNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateVarious
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::UpdateVarious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateVarious");
		
		UWBP_NaEventMenu_C_UpdateVarious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.CreateEventListItem
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::CreateEventListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.CreateEventListItem");
		
		UWBP_NaEventMenu_C_CreateEventListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89A2BB3695
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::OnLoaded_8370E89245646CB9213C6B89A2BB3695(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89A2BB3695");
		
		UWBP_NaEventMenu_C_OnLoaded_8370E89245646CB9213C6B89A2BB3695_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89267F0426
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::OnLoaded_8370E89245646CB9213C6B89267F0426(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89267F0426");
		
		UWBP_NaEventMenu_C_OnLoaded_8370E89245646CB9213C6B89267F0426_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Finished_106B635141EC93816CDD548EF631EDAB
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Finished_106B635141EC93816CDD548EF631EDAB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Finished_106B635141EC93816CDD548EF631EDAB");
		
		UWBP_NaEventMenu_C_Finished_106B635141EC93816CDD548EF631EDAB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareTopImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::PrepareTopImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareTopImage");
		
		UWBP_NaEventMenu_C_PrepareTopImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyTopImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::ReadyTopImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyTopImage");
		
		UWBP_NaEventMenu_C_ReadyTopImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetTopImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UploadId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::SetTopImage(int32_t EventId, const class FName& ID, const class FName& UploadId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetTopImage");
		
		UWBP_NaEventMenu_C_SetTopImage_Params params {};
		params.EventId = EventId;
		params.ID = ID;
		params.UploadId = UploadId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetBgImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UploadId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::SetBgImage(int32_t EventId, const class FName& ID, const class FName& UploadId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetBgImage");
		
		UWBP_NaEventMenu_C_SetBgImage_Params params {};
		params.EventId = EventId;
		params.ID = ID;
		params.UploadId = UploadId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::PrepareImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareImage");
		
		UWBP_NaEventMenu_C_PrepareImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareBgImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::PrepareBgImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareBgImage");
		
		UWBP_NaEventMenu_C_PrepareBgImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyBgImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::ReadyBgImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyBgImage");
		
		UWBP_NaEventMenu_C_ReadyBgImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.RequestGetInfo
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::RequestGetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.RequestGetInfo");
		
		UWBP_NaEventMenu_C_RequestGetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnGetInfoCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::OnGetInfoCompleted(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnGetInfoCompleted");
		
		UWBP_NaEventMenu_C_OnGetInfoCompleted_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnClickedEventBannerButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::OnClickedEventBannerButton(int32_t EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnClickedEventBannerButton");
		
		UWBP_NaEventMenu_C_OnClickedEventBannerButton_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnCloseTutorialHelp
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::OnCloseTutorialHelp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnCloseTutorialHelp");
		
		UWBP_NaEventMenu_C_OnCloseTutorialHelp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialHelpId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::ShowTutorialHelp(const class FName& TutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowTutorialHelp");
		
		UWBP_NaEventMenu_C_ShowTutorialHelp_Params params {};
		params.TutorialHelpId = TutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowSubMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChildMenuType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::ShowSubMenu(int32_t ChildMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowSubMenu");
		
		UWBP_NaEventMenu_C_ShowSubMenu_Params params {};
		params.ChildMenuType = ChildMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnInputCancelKey
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::OnInputCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnInputCancelKey");
		
		UWBP_NaEventMenu_C_OnInputCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");
		
		UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Close");
		
		UWBP_NaEventMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Construct");
		
		UWBP_NaEventMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnAnyUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::OnAnyUpdate(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnAnyUpdate");
		
		UWBP_NaEventMenu_C_OnAnyUpdate_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Destruct");
		
		UWBP_NaEventMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Init
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Init");
		
		UWBP_NaEventMenu_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Ready
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::Ready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Ready");
		
		UWBP_NaEventMenu_C_Ready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.Tick");
		
		UWBP_NaEventMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventMenu_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1");
		
		UWBP_NaEventMenu_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventMenu.WBP_NaEventMenu_C.ExecuteUbergraph_WBP_NaEventMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventMenu_C::ExecuteUbergraph_WBP_NaEventMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventMenu.WBP_NaEventMenu_C.ExecuteUbergraph_WBP_NaEventMenu");
		
		UWBP_NaEventMenu_C_ExecuteUbergraph_WBP_NaEventMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventMenu.WBP_NaEventMenu_C");
		return ptr;
	}

}


