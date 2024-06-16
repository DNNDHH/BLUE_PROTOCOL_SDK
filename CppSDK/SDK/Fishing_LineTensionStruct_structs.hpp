#pragma once

 

// Package: Fishing_LineTensionStruct

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Fishing_LineTensionStruct.Fishing_LineTensionStruct
// 0x0020 (0x0020 - 0x0000)
struct FFishing_LineTensionStruct final
{
public:
	float                                         LowerRange_7_1F8697694F0136018CB068A76877982B;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpperRange_8_F13E653246EF4550BEAB98A5F117C44B;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_11_81F84919403F57F89473D78C6318145C;         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_14_B51A295D49F8A196DCB4BAAAF7D04732;     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFishing_LineTensionStruct) == 0x000008, "Wrong alignment on FFishing_LineTensionStruct");
static_assert(sizeof(FFishing_LineTensionStruct) == 0x000020, "Wrong size on FFishing_LineTensionStruct");
static_assert(offsetof(FFishing_LineTensionStruct, LowerRange_7_1F8697694F0136018CB068A76877982B) == 0x000000, "Member 'FFishing_LineTensionStruct::LowerRange_7_1F8697694F0136018CB068A76877982B' has a wrong offset!");
static_assert(offsetof(FFishing_LineTensionStruct, UpperRange_8_F13E653246EF4550BEAB98A5F117C44B) == 0x000004, "Member 'FFishing_LineTensionStruct::UpperRange_8_F13E653246EF4550BEAB98A5F117C44B' has a wrong offset!");
static_assert(offsetof(FFishing_LineTensionStruct, Color_11_81F84919403F57F89473D78C6318145C) == 0x000008, "Member 'FFishing_LineTensionStruct::Color_11_81F84919403F57F89473D78C6318145C' has a wrong offset!");
static_assert(offsetof(FFishing_LineTensionStruct, Animation_14_B51A295D49F8A196DCB4BAAAF7D04732) == 0x000018, "Member 'FFishing_LineTensionStruct::Animation_14_B51A295D49F8A196DCB4BAAAF7D04732' has a wrong offset!");

}

