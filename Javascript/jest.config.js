module.exports = {
    roots: ['<rootDir>/src'],
    testMatch: ['**/__tests__/**/*.js?(x)', '**/?(*.)+(spec|test).js?(x)'],
    transform: {
        '^.+\\.(js|jsx)?$': 'babel-jest',
    },
};
