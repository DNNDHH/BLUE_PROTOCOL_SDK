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
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.PauseAnim
	 * 		Flags  -> ()
	 */
	void UQuestIcon_Outside_C::PauseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.PauseAnim");
		
		UQuestIcon_Outside_C_PauseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartAtTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_Outside_C::PlayAnim(float StartAtTime, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.PlayAnim");
		
		UQuestIcon_Outside_C_PlayAnim_Params params {};
		params.StartAtTime = StartAtTime;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIconClosed
	 * 		Flags  -> ()
	 */
	void UQuestIcon_Outside_C::SetQuestIconClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIconClosed");
		
		UQuestIcon_Outside_C_SetQuestIconClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_Outside_C::SetQuestIcon(int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIcon");
		
		UQuestIcon_Outside_C_SetQuestIcon_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EQuestStatus, class UTexture2D*>              TextureList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EQuestStatus                                       Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_Outside_C::SetIconTexture(TMap<EQuestStatus, class UTexture2D*> TextureList, EQuestStatus Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconTexture");
		
		UQuestIcon_Outside_C_SetIconTexture_Params params {};
		params.TextureList = TextureList;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EQuestStatus, ESBMiniMapIconType>             IconTypeList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EQuestStatus                                       Status                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_Outside_C::SetIconZOrder(TMap<EQuestStatus, ESBMiniMapIconType> IconTypeList, EQuestStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconZOrder");
		
		UQuestIcon_Outside_C_SetIconZOrder_Params params {};
		params.IconTypeList = IconTypeList;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestIcon_Outside_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.Construct");
		
		UQuestIcon_Outside_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon_Outside.QuestIcon_Outside_C.ExecuteUbergraph_QuestIcon_Outside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_Outside_C::ExecuteUbergraph_QuestIcon_Outside(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon_Outside.QuestIcon_Outside_C.ExecuteUbergraph_QuestIcon_Outside");
		
		UQuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestIcon_Outside_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestIcon_Outside_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestIcon_Outside.QuestIcon_Outside_C");
		return ptr;
	}

}


