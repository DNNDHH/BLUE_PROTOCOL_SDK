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
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InURL                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InCanvasPanel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_HeaderBG_C::SetData(const class FString& InURL, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetData");
		
		UCommunicateSettingMenu_HeaderBG_C_SetData_Params params {};
		params.InURL = InURL;
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.InCanvasPanel = InCanvasPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_HeaderBG_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Construct");
		
		UCommunicateSettingMenu_HeaderBG_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Reset
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_HeaderBG_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Reset");
		
		UCommunicateSettingMenu_HeaderBG_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LocationName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ZoneId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ContentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommunicateSettingMenu_HeaderBG_C::SetLocationText(const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationText");
		
		UCommunicateSettingMenu_HeaderBG_C_SetLocationText_Params params {};
		params.LocationName = LocationName;
		params.ZoneId = ZoneId;
		params.ContentId = ContentId;
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationFollowerUIVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShowPlayerLocationUI                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommunicateSettingMenu_HeaderBG_C::SetLocationFollowerUIVisible(bool IsShowPlayerLocationUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationFollowerUIVisible");
		
		UCommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible_Params params {};
		params.IsShowPlayerLocationUI = IsShowPlayerLocationUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetOtherLocationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LocationName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ZoneId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ContentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommunicateSettingMenu_HeaderBG_C::SetOtherLocationText(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetOtherLocationText");
		
		UCommunicateSettingMenu_HeaderBG_C_SetOtherLocationText_Params params {};
		params.Inactive = Inactive;
		params.LocationName = LocationName;
		params.ZoneId = ZoneId;
		params.ContentId = ContentId;
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ErrorDataSet
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_HeaderBG_C::ErrorDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ErrorDataSet");
		
		UCommunicateSettingMenu_HeaderBG_C_ErrorDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ExecuteUbergraph_CommunicateSettingMenu_HeaderBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_HeaderBG_C::ExecuteUbergraph_CommunicateSettingMenu_HeaderBG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ExecuteUbergraph_CommunicateSettingMenu_HeaderBG");
		
		UCommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_HeaderBG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_HeaderBG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C");
		return ptr;
	}

}


