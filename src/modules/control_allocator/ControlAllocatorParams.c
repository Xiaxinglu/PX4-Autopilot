/****************************************************************************
 *
 *   Copyright (c) 2013-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file control_allocator_params.c
 * Parameters for px4_sumilink_app attitude controller.
 *
 * @author XXL
 * @author XXL
 */

 /**
 * MASS
 *
 * mass of airframe
 *
 * @min 0.0
 * @max 2
 * @decimal 3
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(YOUSUN_MASS,0.563f);

 /**
 * I_XX
 *
 * x主轴惯量
 *
 * @min 0
 * @max 0.3
 * @decimal 5
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(I_XX,0.0014f);


 /**
 * I_YY
 *
 * y主轴惯量
 *
 * @min 0
 * @max 0.3
 * @decimal 5
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(I_YY, 0.00257f);


 /**
 * I_ZZ
 *
 * z主轴惯量
 *
 * @min 0
 * @max 0.3
 * @decimal 5
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(I_ZZ, 0.00294f);

 /**
 * KQT
 *
 * 螺旋桨扭矩同拉力的比值(无风静止条件)
 *
 * @min 0.0
 * @max 0.1
 * @decimal 4
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(KQT, 0.0093f);

 /**
 * SERVO_LR_MAXDEG
 *
 * 小舵机最大偏转角度
 *
 * @min -60
 * @max 60
 * @decimal 1
 * @increment 0.1
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(SERVO_LR_MAXDEG, 60.0f);


 /**
 * SERVO_M_MAXDEG
 *
 * 中间大舵机最大偏转角度
 *
 * @min 0
 * @max 105
 * @decimal 1
 * @increment 0.1
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(SERVO_M_MAXDEG, 90.0f);

 /**
 * CG_X_OFFSET
 *
 * 重心相对大舵机转轴的x位置，向前为正
 *
 * @min -0.05
 * @max 0.05
 * @decimal 3
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(CG_X_OFFSET, 0.000f);

 /**
 * CG_Z_OFFSET
 *
 * 重心相对大舵机转轴的z向位置，向下为正
 *
 * @min -0.1
 * @max 0.3
 * @decimal 3
 * @increment 0.001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(CG_Z_OFFSET, 0.022f);

 /**
 * PROP_Y_OFFSET
 *
 * 螺旋桨力臂
 *
 * @min 0
 * @max 0.2
 * @decimal 4
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_Y_OFFSET, 0.0727f);

 /**
 * SERVO_LINK_DIST
 *
 * 小舵机转轴和大舵机转轴的距离
 *
 * @min 0
 * @max 0.2
 * @decimal 4
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(SERVO_LINK_DIST, 0.0315f);

/**
 * PROP_POLY_A
 *
 * 螺旋桨静态拉力到PWM模型的三次项系数 (ka_nonlinear)
 * pwm = a*thrust^3 + b*thrust^2 + c*thrust + d
 *
 * @min -1.0
 * @max 1.0
 * @decimal 9
 * @increment 0.000001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_POLY_A, 0.00066737f);

/**
 * PROP_POLY_B
 *
 * 螺旋桨静态拉力到PWM模型的二次项系数 (kb_nonlinear)
 * pwm = a*thrust^3 + b*thrust^2 + c*thrust + d
 *
 * @min -1.0
 * @max 1.0
 * @decimal 5
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_POLY_B, -0.0132f);

/**
 * PROP_POLY_C
 *
 * 螺旋桨静态拉力到PWM模型的一次项系数 (kc_nonlinear)
 * pwm = a*thrust^3 + b*thrust^2 + c*thrust + d
 *
 * @min -1.0
 * @max 1.0
 * @decimal 5
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_POLY_C, 0.1474f);

/**
 * PROP_POLY_D
 *
 * 螺旋桨静态拉力到PWM模型的常数项系数 (kd_nonlinear)
 * pwm = a*thrust^3 + b*thrust^2 + c*thrust + d
 *
 * @min -1.0
 * @max 1.0
 * @decimal 5
 * @increment 0.0001
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_POLY_D, 0.0666f);

/**
 * PROP_MAX_THRUST
 *
 * 单个螺旋桨最大推力 (N)
 * 用于限制控制分配和防止过饱和
 *
 * @min 0.0
 * @max 50.0
 * @decimal 2
 * @increment 0.1
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(PROP_MAX_THRUST, 11.26f);

/**
 * SERVO_M_MIN
 *
 * 变形飞行大舵机最小角度，deg
 *
 * @min 0.0
 * @max 90.0
 * @decimal 2
 * @increment 1.0
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(SERVO_M_MIN, 30.0f);


/**
 * SERVO_M_SLEWRATE
 *
 * 大舵机变化速率限幅,deg/s
 *
 * @min 0.0
 * @max 90.0
 * @decimal 2
 * @increment 1.0
 * @group Bicopter Params
 */
PARAM_DEFINE_FLOAT(SERVO_M_SLEWRATE, 30.0f);
