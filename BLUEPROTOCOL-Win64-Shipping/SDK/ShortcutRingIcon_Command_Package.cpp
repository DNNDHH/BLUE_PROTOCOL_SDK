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
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnExecuteError
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Command_C::OnExecuteError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnExecuteError");
		
		UShortcutRingIcon_Command_C_OnExecuteError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnSetEnableToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Command_C::OnSetEnableToolTip(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnSetEnableToolTip");
		
		UShortcutRingIcon_Command_C_OnSetEnableToolTip_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldAbbrStr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutIconCommandID                             CommandID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UShortcutRingIcon_Command_C::GetBookmarkFieldAbbrStr(EShortcutIconCommandID CommandID, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldAbbrStr");
		
		UShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr_Params params {};
		params.CommandID = CommandID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldStr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutIconCommandID                             CommandID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UShortcutRingIcon_Command_C::GetBookmarkFieldStr(EShortcutIconCommandID CommandID, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldStr");
		
		UShortcutRingIcon_Command_C_GetBookmarkFieldStr_Params params {};
		params.CommandID = CommandID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsStr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutIconCommandID                             CommandID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UShortcutRingIcon_Command_C::GetKeyconfigItemsStr(EShortcutIconCommandID CommandID, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsStr");
		
		UShortcutRingIcon_Command_C_GetKeyconfigItemsStr_Params params {};
		params.CommandID = CommandID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsTextID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TextId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Command_C::GetKeyconfigItemsTextID(EConfig_KeyconfigItems Type, int32_t* TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsTextID");
		
		UShortcutRingIcon_Command_C_GetKeyconfigItemsTextID_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextId != nullptr)
			*TextId = params.TextId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.CommandIDToKeyconfigItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutIconCommandID                             InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             KeyConfigItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Command_C::CommandIDToKeyconfigItems(EShortcutIconCommandID InId, EConfig_KeyconfigItems* KeyConfigItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.CommandIDToKeyconfigItems");
		
		UShortcutRingIcon_Command_C_CommandIDToKeyconfigItems_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyConfigItems != nullptr)
			*KeyConfigItems = params.KeyConfigItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UShortcutRingIcon_Command_C::GetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetToolTip");
		
		UShortcutRingIcon_Command_C_GetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.PlayAnimPressed
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Command_C::PlayAnimPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.PlayAnimPressed");
		
		UShortcutRingIcon_Command_C_PlayAnimPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Command_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseEnter");
		
		UShortcutRingIcon_Command_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Command_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseLeave");
		
		UShortcutRingIcon_Command_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.ExecuteUbergraph_ShortcutRingIcon_Command
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Command_C::ExecuteUbergraph_ShortcutRingIcon_Command(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.ExecuteUbergraph_ShortcutRingIcon_Command");
		
		UShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRingIcon_Command_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRingIcon_Command_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutRingIcon_Command.ShortcutRingIcon_Command_C");
		return ptr;
	}

}


