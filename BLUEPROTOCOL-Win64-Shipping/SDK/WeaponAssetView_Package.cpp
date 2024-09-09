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
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetupMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponAssetView_C::SetupMasterData(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetupMasterData");
		
		UWeaponAssetView_C_SetupMasterData_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetBaseInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                BaseInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponAssetView_C::SetBaseInfo(const struct FOwnItemInfo& BaseInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetBaseInfo");
		
		UWeaponAssetView_C_SetBaseInfo_Params params {};
		params.BaseInfo = BaseInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.UpdateDiffValue
	 * 		Flags  -> ()
	 */
	void UWeaponAssetView_C::UpdateDiffValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.UpdateDiffValue");
		
		UWeaponAssetView_C_UpdateDiffValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetBG
	 * 		Flags  -> ()
	 */
	void UWeaponAssetView_C::SetBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetBG");
		
		UWeaponAssetView_C_SetBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetUpName
	 * 		Flags  -> ()
	 */
	void UWeaponAssetView_C::SetUpName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetUpName");
		
		UWeaponAssetView_C_SetUpName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetDiffVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponAssetView_C::SetDiffVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetDiffVisibility");
		
		UWeaponAssetView_C_SetDiffVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetupParameterWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponAssetView_C::SetupParameterWeapon(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetupParameterWeapon");
		
		UWeaponAssetView_C_SetupParameterWeapon_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponAssetView_C::SetInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.SetInfo");
		
		UWeaponAssetView_C_SetInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.Request_Image
	 * 		Flags  -> ()
	 */
	void UWeaponAssetView_C::Request_Image()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.Request_Image");
		
		UWeaponAssetView_C_Request_Image_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponAssetView.WeaponAssetView_C.ExecuteUbergraph_WeaponAssetView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponAssetView_C::ExecuteUbergraph_WeaponAssetView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAssetView.WeaponAssetView_C.ExecuteUbergraph_WeaponAssetView");
		
		UWeaponAssetView_C_ExecuteUbergraph_WeaponAssetView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAssetView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAssetView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponAssetView.WeaponAssetView_C");
		return ptr;
	}

}


