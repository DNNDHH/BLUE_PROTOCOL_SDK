#pragma once

 

// Package: EquipPosition

#include "Basic.hpp"

#include "EquipPosition_classes.hpp"
#include "EquipPosition_parameters.hpp"


namespace SDK
{

// Function EquipPosition.EquipPosition_C.SetEquipPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Imagine_Id                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipPosition_C::SetEquipPosition(int32 Imagine_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipPosition_C", "SetEquipPosition");

	Params::EquipPosition_C_SetEquipPosition Parms{};

	Parms.Imagine_Id = Imagine_Id;

	UObject::ProcessEvent(Func, &Parms);
}

}

