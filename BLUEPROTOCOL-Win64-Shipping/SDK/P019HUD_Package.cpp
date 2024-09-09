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
	 * 		Name   -> Function P019HUD.P019HUD_C.VisibleCartridge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CartridgeNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PowerBulletActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HealBulletActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP019HUD_C::VisibleCartridge(int32_t CartridgeNum, bool PowerBulletActive, bool HealBulletActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.VisibleCartridge");
		
		UP019HUD_C_VisibleCartridge_Params params {};
		params.CartridgeNum = CartridgeNum;
		params.PowerBulletActive = PowerBulletActive;
		params.HealBulletActive = HealBulletActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnSetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEdit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP019HUD_C::OnSetEditMode(bool InIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnSetEditMode");
		
		UP019HUD_C_OnSetEditMode_Params params {};
		params.InIsEdit = InIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnTerminate");
		
		UP019HUD_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnInitialize");
		
		UP019HUD_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnUnbind");
		
		UP019HUD_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnBind
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnBind");
		
		UP019HUD_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.PlayAnimReverseInOut
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::PlayAnimReverseInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.PlayAnimReverseInOut");
		
		UP019HUD_C_PlayAnimReverseInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.PlayAnimForwardInOut
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::PlayAnimForwardInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.PlayAnimForwardInOut");
		
		UP019HUD_C_PlayAnimForwardInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.DebugPrintFunc
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::DebugPrintFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.DebugPrintFunc");
		
		UP019HUD_C_DebugPrintFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnSetMaxCartridge
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnSetMaxCartridge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnSetMaxCartridge");
		
		UP019HUD_C_OnSetMaxCartridge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnUpdateAdditionalCartridge
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnUpdateAdditionalCartridge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnUpdateAdditionalCartridge");
		
		UP019HUD_C_OnUpdateAdditionalCartridge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnInitAdditionalCartridgeList
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnInitAdditionalCartridgeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnInitAdditionalCartridgeList");
		
		UP019HUD_C_OnInitAdditionalCartridgeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnInitCartridgeList
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::OnInitCartridgeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnInitCartridgeList");
		
		UP019HUD_C_OnInitCartridgeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnSaveEquippedPassiveArtsDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP019HUD_C::OnSaveEquippedPassiveArtsDelegate(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnSaveEquippedPassiveArtsDelegate");
		
		UP019HUD_C_OnSaveEquippedPassiveArtsDelegate_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.BindOnSaveEquippedPassiveArts
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::BindOnSaveEquippedPassiveArts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.BindOnSaveEquippedPassiveArts");
		
		UP019HUD_C_BindOnSaveEquippedPassiveArts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.UnbindOnSaveEquippedPassiveArts
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::UnbindOnSaveEquippedPassiveArts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.UnbindOnSaveEquippedPassiveArts");
		
		UP019HUD_C_UnbindOnSaveEquippedPassiveArts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.OnChangeUIVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP019HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.OnChangeUIVisibleSetting");
		
		UP019HUD_C_OnChangeUIVisibleSetting_Params params {};
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
	 * 		Name   -> Function P019HUD.P019HUD_C.BindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::BindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.BindVisibleSetting");
		
		UP019HUD_C_BindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.UnbindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP019HUD_C::UnbindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.UnbindVisibleSetting");
		
		UP019HUD_C_UnbindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P019HUD.P019HUD_C.ExecuteUbergraph_P019HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP019HUD_C::ExecuteUbergraph_P019HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P019HUD.P019HUD_C.ExecuteUbergraph_P019HUD");
		
		UP019HUD_C_ExecuteUbergraph_P019HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP019HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP019HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P019HUD.P019HUD_C");
		return ptr;
	}

}


