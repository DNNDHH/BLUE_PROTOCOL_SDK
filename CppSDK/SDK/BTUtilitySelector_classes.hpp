#pragma once

 

// Package: BTUtilitySelector

#include "Basic.hpp"

#include "BTUtilitySelector_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// Class BTUtilitySelector.BTDecorator_UtilityBase
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityBase : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBase">();
	}
	static class UBTDecorator_UtilityBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBase>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBase) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBase");
static_assert(sizeof(UBTDecorator_UtilityBase) == 0x000068, "Wrong size on UBTDecorator_UtilityBase");

// Class BTUtilitySelector.BTDecorator_UtilityConstant
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_UtilityConstant final : public UBTDecorator_UtilityBase
{
public:
	float                                         UtilityValue;                                      // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C9F[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityConstant">();
	}
	static class UBTDecorator_UtilityConstant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityConstant>();
	}
};
static_assert(alignof(UBTDecorator_UtilityConstant) == 0x000008, "Wrong alignment on UBTDecorator_UtilityConstant");
static_assert(sizeof(UBTDecorator_UtilityConstant) == 0x000070, "Wrong size on UBTDecorator_UtilityConstant");
static_assert(offsetof(UBTDecorator_UtilityConstant, UtilityValue) == 0x000068, "Member 'UBTDecorator_UtilityConstant::UtilityValue' has a wrong offset!");

// Class BTUtilitySelector.BTComposite_UtilitySelector
// 0x0008 (0x0098 - 0x0090)
class UBTComposite_UtilitySelector final : public UBTCompositeNode
{
public:
	EUtilitySelectionMode                         SelectionMode;                                     // 0x0090(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1CA0[0x7];                                     // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTComposite_UtilitySelector">();
	}
	static class UBTComposite_UtilitySelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTComposite_UtilitySelector>();
	}
};
static_assert(alignof(UBTComposite_UtilitySelector) == 0x000008, "Wrong alignment on UBTComposite_UtilitySelector");
static_assert(sizeof(UBTComposite_UtilitySelector) == 0x000098, "Wrong size on UBTComposite_UtilitySelector");
static_assert(offsetof(UBTComposite_UtilitySelector, SelectionMode) == 0x000090, "Member 'UBTComposite_UtilitySelector::SelectionMode' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityBiasBase
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityBiasBase : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBiasBase">();
	}
	static class UBTDecorator_UtilityBiasBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBiasBase>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBiasBase) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBiasBase");
static_assert(sizeof(UBTDecorator_UtilityBiasBase) == 0x000068, "Wrong size on UBTDecorator_UtilityBiasBase");

// Class BTUtilitySelector.BTDecorator_UtilityBiasCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_UtilityBiasCooldown final : public UBTDecorator_UtilityBiasBase
{
public:
	float                                         CooldownTime;                                      // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Bias;                                              // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EUtilityBiasCooldownType                      Function;                                          // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1CA1[0x7];                                     // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBiasCooldown">();
	}
	static class UBTDecorator_UtilityBiasCooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBiasCooldown>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBiasCooldown) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBiasCooldown");
static_assert(sizeof(UBTDecorator_UtilityBiasCooldown) == 0x000078, "Wrong size on UBTDecorator_UtilityBiasCooldown");
static_assert(offsetof(UBTDecorator_UtilityBiasCooldown, CooldownTime) == 0x000068, "Member 'UBTDecorator_UtilityBiasCooldown::CooldownTime' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBiasCooldown, Bias) == 0x00006C, "Member 'UBTDecorator_UtilityBiasCooldown::Bias' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBiasCooldown, Function) == 0x000070, "Member 'UBTDecorator_UtilityBiasCooldown::Function' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityBiasLastSelected
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_UtilityBiasLastSelected final : public UBTDecorator_UtilityBiasBase
{
public:
	float                                         Bias;                                              // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1CA2[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBiasLastSelected">();
	}
	static class UBTDecorator_UtilityBiasLastSelected* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBiasLastSelected>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBiasLastSelected) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBiasLastSelected");
static_assert(sizeof(UBTDecorator_UtilityBiasLastSelected) == 0x000070, "Wrong size on UBTDecorator_UtilityBiasLastSelected");
static_assert(offsetof(UBTDecorator_UtilityBiasLastSelected, Bias) == 0x000068, "Member 'UBTDecorator_UtilityBiasLastSelected::Bias' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityBlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_UtilityBlackboardBase : public UBTDecorator_UtilityBase
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;                                     // 0x0068(0x0028)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBlackboardBase">();
	}
	static class UBTDecorator_UtilityBlackboardBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBlackboardBase>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBlackboardBase) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBlackboardBase");
static_assert(sizeof(UBTDecorator_UtilityBlackboardBase) == 0x000090, "Wrong size on UBTDecorator_UtilityBlackboardBase");
static_assert(offsetof(UBTDecorator_UtilityBlackboardBase, BlackboardKey) == 0x000068, "Member 'UBTDecorator_UtilityBlackboardBase::BlackboardKey' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityBlackboard
// 0x0018 (0x00A8 - 0x0090)
class UBTDecorator_UtilityBlackboard final : public UBTDecorator_UtilityBlackboardBase
{
public:
	float                                         MinValue;                                          // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxValue;                                          // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EUtilityEvaluateType                          Evaluation;                                        // 0x0098(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bInverse : 1;                                      // 0x0099(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1CA3[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleX;                                            // 0x009C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ScaleY;                                            // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         OffsetY;                                           // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityBlackboard">();
	}
	static class UBTDecorator_UtilityBlackboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityBlackboard>();
	}
};
static_assert(alignof(UBTDecorator_UtilityBlackboard) == 0x000008, "Wrong alignment on UBTDecorator_UtilityBlackboard");
static_assert(sizeof(UBTDecorator_UtilityBlackboard) == 0x0000A8, "Wrong size on UBTDecorator_UtilityBlackboard");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, MinValue) == 0x000090, "Member 'UBTDecorator_UtilityBlackboard::MinValue' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, MaxValue) == 0x000094, "Member 'UBTDecorator_UtilityBlackboard::MaxValue' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, Evaluation) == 0x000098, "Member 'UBTDecorator_UtilityBlackboard::Evaluation' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, ScaleX) == 0x00009C, "Member 'UBTDecorator_UtilityBlackboard::ScaleX' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, ScaleY) == 0x0000A0, "Member 'UBTDecorator_UtilityBlackboard::ScaleY' has a wrong offset!");
static_assert(offsetof(UBTDecorator_UtilityBlackboard, OffsetY) == 0x0000A4, "Member 'UBTDecorator_UtilityBlackboard::OffsetY' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityCurve
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_UtilityCurve final : public UBTDecorator_UtilityBlackboardBase
{
public:
	class UCurveFloat*                            Curve;                                             // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityCurve">();
	}
	static class UBTDecorator_UtilityCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityCurve>();
	}
};
static_assert(alignof(UBTDecorator_UtilityCurve) == 0x000008, "Wrong alignment on UBTDecorator_UtilityCurve");
static_assert(sizeof(UBTDecorator_UtilityCurve) == 0x000098, "Wrong size on UBTDecorator_UtilityCurve");
static_assert(offsetof(UBTDecorator_UtilityCurve, Curve) == 0x000090, "Member 'UBTDecorator_UtilityCurve::Curve' has a wrong offset!");

// Class BTUtilitySelector.BTDecorator_UtilityOperationBase
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityOperationBase : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityOperationBase">();
	}
	static class UBTDecorator_UtilityOperationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityOperationBase>();
	}
};
static_assert(alignof(UBTDecorator_UtilityOperationBase) == 0x000008, "Wrong alignment on UBTDecorator_UtilityOperationBase");
static_assert(sizeof(UBTDecorator_UtilityOperationBase) == 0x000068, "Wrong size on UBTDecorator_UtilityOperationBase");

// Class BTUtilitySelector.BTDecorator_UtilityOperationAverage
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityOperationAverage final : public UBTDecorator_UtilityOperationBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityOperationAverage">();
	}
	static class UBTDecorator_UtilityOperationAverage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityOperationAverage>();
	}
};
static_assert(alignof(UBTDecorator_UtilityOperationAverage) == 0x000008, "Wrong alignment on UBTDecorator_UtilityOperationAverage");
static_assert(sizeof(UBTDecorator_UtilityOperationAverage) == 0x000068, "Wrong size on UBTDecorator_UtilityOperationAverage");

// Class BTUtilitySelector.BTDecorator_UtilityOperationMax
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityOperationMax final : public UBTDecorator_UtilityOperationBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityOperationMax">();
	}
	static class UBTDecorator_UtilityOperationMax* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityOperationMax>();
	}
};
static_assert(alignof(UBTDecorator_UtilityOperationMax) == 0x000008, "Wrong alignment on UBTDecorator_UtilityOperationMax");
static_assert(sizeof(UBTDecorator_UtilityOperationMax) == 0x000068, "Wrong size on UBTDecorator_UtilityOperationMax");

// Class BTUtilitySelector.BTDecorator_UtilityOperationMin
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_UtilityOperationMin final : public UBTDecorator_UtilityOperationBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_UtilityOperationMin">();
	}
	static class UBTDecorator_UtilityOperationMin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_UtilityOperationMin>();
	}
};
static_assert(alignof(UBTDecorator_UtilityOperationMin) == 0x000008, "Wrong alignment on UBTDecorator_UtilityOperationMin");
static_assert(sizeof(UBTDecorator_UtilityOperationMin) == 0x000068, "Wrong size on UBTDecorator_UtilityOperationMin");

}

