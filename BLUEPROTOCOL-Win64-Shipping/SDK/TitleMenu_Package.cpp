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
	 * 		Name   -> Function TitleMenu.TitleMenu_C.GetBanFinishedAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UTitleMenu_C::GetBanFinishedAt(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.GetBanFinishedAt");
		
		UTitleMenu_C_GetBanFinishedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.SetEffectEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleMenu_C::SetEffectEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.SetEffectEnable");
		
		UTitleMenu_C_SetEffectEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.IsCharaSelectStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CharaSelect                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleMenu_C::IsCharaSelectStart(bool* CharaSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.IsCharaSelectStart");
		
		UTitleMenu_C_IsCharaSelectStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharaSelect != nullptr)
			*CharaSelect = params.CharaSelect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.ClearCache
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::ClearCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.ClearCache");
		
		UTitleMenu_C_ClearCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.GetNewCharacterId
	 * 		Flags  -> ()
	 */
	class FString UTitleMenu_C::GetNewCharacterId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.GetNewCharacterId");
		
		UTitleMenu_C_GetNewCharacterId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.HasFromOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CheckString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UTitleMenu_C::HasFromOption(const class FString& CheckString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.HasFromOption");
		
		UTitleMenu_C_HasFromOption_Params params {};
		params.CheckString = CheckString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnLoaded_136303394FB780B732D94AA171FCCCE2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnLoaded_136303394FB780B732D94AA171FCCCE2(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnLoaded_136303394FB780B732D94AA171FCCCE2");
		
		UTitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnLoaded_E8315409430BF09E1DB899BAE01D7ABD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnLoaded_E8315409430BF09E1DB899BAE01D7ABD(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnLoaded_E8315409430BF09E1DB899BAE01D7ABD");
		
		UTitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72");
		
		UTitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature");
		
		UTitleMenu_C_BndEvt__StartMenu_K2Node_ComponentBoundEvent_591_OnConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.InitConfig
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::InitConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.InitConfig");
		
		UTitleMenu_C_InitConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.InitStartMenu
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::InitStartMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.InitStartMenu");
		
		UTitleMenu_C_InitStartMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature");
		
		UTitleMenu_C_BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_395_OnExit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature");
		
		UTitleMenu_C_BndEvt__UMG_StartMenu_K2Node_ComponentBoundEvent_382_OnPlayGame__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.SetButtonFocus
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::SetButtonFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.SetButtonFocus");
		
		UTitleMenu_C_SetButtonFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnInitializeOption_Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnInitializeOption_Selected(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnInitializeOption_Selected");
		
		UTitleMenu_C_OnInitializeOption_Selected_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnReOpenOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnReOpenOption(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnReOpenOption");
		
		UTitleMenu_C_OnReOpenOption_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OpenOption KeyConfig
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::OpenOptionKeyConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OpenOption KeyConfig");
		
		UTitleMenu_C_OpenOptionKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.Construct");
		
		UTitleMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.Destruct");
		
		UTitleMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature");
		
		UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_235_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature");
		
		UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_162_OnRequestCreateMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReturnDisconnect                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature(const class FString& CharacterId, int32_t listIndex, bool bReturnDisconnect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature");
		
		UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature_Params params {};
		params.CharacterId = CharacterId;
		params.listIndex = listIndex;
		params.bReturnDisconnect = bReturnDisconnect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FriendCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature(const class FString& CharacterId, int32_t listIndex, const class FString& FriendCharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature");
		
		UTitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature_Params params {};
		params.CharacterId = CharacterId;
		params.listIndex = listIndex;
		params.FriendCharacterId = FriendCharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnLoginFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnLoginFailure(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnLoginFailure");
		
		UTitleMenu_C_OnLoginFailure_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.InitCharaSelect
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::InitCharaSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.InitCharaSelect");
		
		UTitleMenu_C_InitCharaSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.ResetGameLoadStatus
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::ResetGameLoadStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.ResetGameLoadStatus");
		
		UTitleMenu_C_ResetGameLoadStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnFailedConnectServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnFailedConnectServer(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnFailedConnectServer");
		
		UTitleMenu_C_OnFailedConnectServer_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnComebackCharaCreate
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::OnComebackCharaCreate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnComebackCharaCreate");
		
		UTitleMenu_C_OnComebackCharaCreate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UTitleMenu_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OnFinishedDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::OnFinishedDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OnFinishedDialog");
		
		UTitleMenu_C_OnFinishedDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.OperationPossible
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::OperationPossible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.OperationPossible");
		
		UTitleMenu_C_OperationPossible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UTitleMenu_C_BndEvt__TitleMenu_AllowSkip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2");
		
		UTitleMenu_C_WidgetAnimationEvt_AnimInFirst_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.Init
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.Init");
		
		UTitleMenu_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.LoadEffectActor
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::LoadEffectActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.LoadEffectActor");
		
		UTitleMenu_C_LoadEffectActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.LoadCharaLayer
	 * 		Flags  -> ()
	 */
	void UTitleMenu_C::LoadCharaLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.LoadCharaLayer");
		
		UTitleMenu_C_LoadCharaLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.SetupCharaLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InSBTitleMenuCharaLayer                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::SetupCharaLayer(class UClass* InSBTitleMenuCharaLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.SetupCharaLayer");
		
		UTitleMenu_C_SetupCharaLayer_Params params {};
		params.InSBTitleMenuCharaLayer = InSBTitleMenuCharaLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleMenu.TitleMenu_C.ExecuteUbergraph_TitleMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleMenu_C::ExecuteUbergraph_TitleMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleMenu.TitleMenu_C.ExecuteUbergraph_TitleMenu");
		
		UTitleMenu_C_ExecuteUbergraph_TitleMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitleMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitleMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TitleMenu.TitleMenu_C");
		return ptr;
	}

}


