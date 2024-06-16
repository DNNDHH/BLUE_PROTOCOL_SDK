#pragma once

 

// Package: MailAttachmentAcceptBody

#include "Basic.hpp"

#include "MailAttachmentAcceptBody_classes.hpp"
#include "MailAttachmentAcceptBody_parameters.hpp"


namespace SDK
{

// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.ExecuteUbergraph_MailAttachmentAcceptBody
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptBody_C::ExecuteUbergraph_MailAttachmentAcceptBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "ExecuteUbergraph_MailAttachmentAcceptBody");

	Params::MailAttachmentAcceptBody_C_ExecuteUbergraph_MailAttachmentAcceptBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.Set Attachment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMailAttachment                Param_AttachmentData                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailAttachmentAcceptBody_C::Set_Attachment(const struct FSBMailAttachment& Param_AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "Set Attachment");

	Params::MailAttachmentAcceptBody_C_Set_Attachment Parms{};

	Parms.Param_AttachmentData = std::move(Param_AttachmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.IsOverflow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Overflow                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptBody_C::IsOverflow(bool* Overflow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "IsOverflow");

	Params::MailAttachmentAcceptBody_C_IsOverflow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Overflow != nullptr)
		*Overflow = Parms.Overflow;
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Item()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Item");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Weapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Weapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetCountOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CountOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptBody_C::SetCountOnly(bool CountOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "SetCountOnly");

	Params::MailAttachmentAcceptBody_C_SetCountOnly Parms{};

	Parms.CountOnly = CountOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetStorageSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SizeNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CountNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptBody_C::SetStorageSize(int32 SizeNum, int32 CountNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "SetStorageSize");

	Params::MailAttachmentAcceptBody_C_SetStorageSize Parms{};

	Parms.SizeNum = SizeNum;
	Parms.CountNum = CountNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.SetAccept
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptBody_C::SetAccept(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "SetAccept");

	Params::MailAttachmentAcceptBody_C_SetAccept Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Orb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Orb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Orb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.GetOverflowType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptBody_C::GetOverflowType(int32* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "GetOverflowType");

	Params::MailAttachmentAcceptBody_C_GetOverflowType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Recipe
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Recipe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Recipe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Emote
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Emote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Emote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Stamp
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Stamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Stamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Achievement
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Achievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Achievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_RankPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_RankPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_RankPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Ability
// (Public, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Ability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Ability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Token
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Token()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Token");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.IsDuplicate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Duplicate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptBody_C::IsDuplicate(bool* Duplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "IsDuplicate");

	Params::MailAttachmentAcceptBody_C_IsDuplicate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duplicate != nullptr)
		*Duplicate = Parms.Duplicate;
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_BPPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_BPPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_BPPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_AdventureBoard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_AdventureBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_AdventureBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_LiquidMemory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_LiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_LiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_Award
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_Award()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_Award");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptBody.MailAttachmentAcceptBody_C.AttachmentWork_AdventurerCardDecolations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptBody_C::AttachmentWork_AdventurerCardDecolations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptBody_C", "AttachmentWork_AdventurerCardDecolations");

	UObject::ProcessEvent(Func, nullptr);
}

}

